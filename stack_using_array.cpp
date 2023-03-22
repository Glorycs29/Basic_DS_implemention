#include <iostream>
using namespace std;

//implementing stack using arrays 
template<class T>
class stack{
    private:
        int length;
        int top;
        T* arr;

    public:
        stack(){
            top = -1;
            lenght = 0;
            arr = new T[100];
        }

        void push(T data){
            if(top ==99){
                cout<<"stack is full"<<"\n";
                return;
            }
            arr[++top] = data;
            length++;
        }

        T pop(){
            if(top == -1){
                cout<<"stack is empty"<<"\n";
                return NULL;
            }
            length--;
            return arr[top--];
        }

        T getTop(){
            if(top == -1){
                cout<<"stack is empty"<<"\n";
                return NULL;
            }
            return arr[top];
        }

        int size(){
            return length;
        }

};




int main(){

    return 0;
}