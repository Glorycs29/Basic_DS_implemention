#include<iostream>
using namespace std;

template<class T>
class queue{
    private:
        T* arr;
        int length;
        int front;
        int rear;

    public:
        queue(){
            arr = new T[1000];
            length = 0;
            front  = -1;
            rear = -1;
        }

        void enqueue(T data){
            if(front ==-1 && rear == -1)||(front>rear){
                front = 0;
                rear = 0;
                arr[rear] = data;
            }else{
                arr[++rear]=data;
            }
            length++;
        }

        T dequeue(){
            if(front ==-1 && rear == -1)||(front>rear){
                cout<<"nothing to delete\n";
                return NULL;
            }else{
                int deleted = arr[front++];
                length--;
                return deleted;
            }
        }

        T getFront(){
            if(front ==-1 && rear == -1)||(front>rear){
                cout<<"queue is empty\n";
                return NULL;
            }else{
                return arr[front];
            }
        }

        int size(){
            return length;
        }
};



int main(){
    return 0;
}