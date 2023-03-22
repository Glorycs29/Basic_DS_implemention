#include<iostream>
using namespace std;

//vector implementation

class vector{
    private:
    int* arr;
    int size;
    int capacity;

    void doubleTheSize(){
        int* temp = new int [2*capacity];
        for(int i=0; i<size; i++){
            temp[i] = arr[i];
        }
        capacity = capacity*2;
        arr = temp;
    }

    void halfTheSize(){
        int* temp = new int [capacity/2];
        for(int i = 0; i<size ; i++){
            temp[i] = arr[i];
        }
        capacity = capacity/2;
        arr = temp;
    }

    public:
    vector(){
        arr = new int [1];
        size = 0;
        capacity = 1;
    }
    void pushData(int data){
        if(size == capacity){
            doubleTheSize();
        }
        arr[size++] = data;
    }

    int popData(){
        if(size == 0){
            cout<<"there is nothing to delete";
            return -1;
        }
        int deleted = arr[size-1];
        size--;
    //half the size
        if(size == capacity/2 && capacity != 1){
            halfTheSize();
            return deleted;
        }
    }




};



int main(){
    vector  v;
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);
    v.pushData(10);

    


    return 0;
}