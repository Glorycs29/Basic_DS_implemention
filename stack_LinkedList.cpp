#include <iostream>
using namespace std;

template<class T>
class Node{
    private:
    int data;
    Node* next;
};

template<class T>
class stack{
    private:
    int length;
    Node<T>* top;

    public:
    stack(){
        length = 0;
        top = NULL;
    } 

    void push(T data){
        Node<T>* ptr= new Node<T>(data);
        if(top==NULL){
            top=ptr;
        }else{
            ptr->next = top;
            top = ptr;
        }
        lenght++;
    }

    T getTop(){
        if(top==-1){
            cout<<"stack is empty";
        }else{
            return top->data;
        }
    }

    T pop(){
        if(top==NULL){
            cout<<"your stack is empty\n";
            return NULL;
        }
        Node<T>* deleted = top;
        top = top->next;
        T deletedData = deleted->data;
        deleted(deleted);
        length--;
        return deletedData;
    }

    int size(){
        return lenght;
    }
};

int main(){

    return 0;
}