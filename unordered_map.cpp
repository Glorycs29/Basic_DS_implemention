#include<bits/stdc++.h>
using namespace std;


template <class K , class V>
class unorderedMap{
    private:
        int unique;
        vector <pair<K,V>>* arr;
        int size;
        hash<K> myHashFunction;
    public:
        unorderedMap(){
            unique = 0;
            size = 2;
            arr = new vector <pair<K,V>>[size];
        }

    int getHash(K key){

        return myHashFunction(key);
    }

    bool find(K key){

        int index = (abs(getHash(key)))%size;
        for(pair<K,V> p: arr[index]){
            if(p.first == key){
                return true;
            }
            else{
                return false;
            }
        }
    }

    void insert(K key,V value){
            int index=(abs(getHash(key)))%size;
            //cout<<index<<" ";

            if(find(key)){
                for(pair<K,V>& p:arr[index]){
                    if(p.first == key){
                        p.second=value;
                    }
                }
            }else{
                //cout<<"hello\n";
                arr[index].push_back({key,value});
                unique++;
            }

            if(unique*1.0f/size >= 2){
                reHash();
            }
    }

   
    void reHash(){

        vector <pair<K,V>>* temp = new vector<pair<K,V>>[2*size];
        swap(arr, temp);
        size = size*2;
        unique = 0;
        for(int i = 0; i<size/2; i++){
            for(pair<K,V> p:temp[i]){
                insert(p.first , p.second);
            }
        }
    }

    void display(){

            for(int i=0;i<size;i++){
                cout<<"index "<<i<<" ";
                for(pair<K,V> p: arr[i]){
                    cout<<"("<<p.first<<" : "<<p.second<<")  --> ";
                }
                cout<<"\n";
            }
            cout<<"\n";
        }

};





int main(){
    unorderedMap<string,int> record;
    record.insert("glory" , 1);
    record.insert("raveet", 2);
    record.insert("olive" , 6);
    record.insert("priya", 7);
    record.display();

    return 0;
}