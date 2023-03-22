#include<iostream>
using namespace std;

//genric implementation of queue using linkedlist

template<class T>
    class Node{
        public:
            T data;
            Node<T>* next;
            Node(T data){
                this->data = data;
                this->next = NULL;
            }
    };

template<class T>
    class queue{
        public:
            Node<T>* front;
            Node<T>* rear;
            int length;

            // constructor
            queue(){
                front = NULL;
                rear = NULL;
                length = 0;
            }

            void enqueue(T data){
                Node<T>* ptr = new Node(data);
                if(front == NULL && rear == NULL){
                    rear = ptr;
                    front = ptr;
                }else{
                    rear->next = ptr;
                    rear  = rear->next;
                }
                length++;
            }

            T dequeue(){
                if(front == NULL && rear == NULL){
                    cout<<"nothing to delete\n";
                    return NULL;
                }else{
                    Node<T>* X = front;
                    if(front== rear){
                        rear = NULL;
                        front = NULL;
                    }else{
                    front  = front->next;
                    T deleted = X->data;
                    delete(X);
                    length--;
                    return deleted;
                    }
                }
            }

            T getFront(){
                if(front == NULL && rear == NULL){
                    cout<<"nothing in queue\n";
                    return NULL;
                }else{
                    return front->data;
                }


            }

            int size(){
                return length;

            }
        
    };

int main(){
     queue<string> q;
    q.enqueue("harshit");
    q.enqueue("Shivani");
    q.enqueue("Nikhil");
    cout<<q.dequeue()<<" ";
    cout<<q.getFront()<<" ";
    q.enqueue("Mohit");
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue()<<" ";
    q.enqueue("Raveet");
    cout<<q.getFront()<<" ";
    return 0;
}