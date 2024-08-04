#include<iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;

int main(){
    //maxheap element
    priority_queue<int>maxheap;
    //min heap element
    
    priority_queue<int,vector<int>,greater<int>>minheap;
    
    //add the max heap element 
    maxheap.push(20);
    maxheap.push(30);
    maxheap.push(40);
    cout<<"max heap element"<<endl;
    while(!maxheap.empty()){
        cout<<"maxheap priority queue"<<maxheap.top()<<endl;
          minheap.pop();
    }
     minheap.push(10);
    minheap.push(2);
    minheap.push(5);
    cout<<"max heap element"<<endl;
    while(!minheap.empty()){
        cout<<"maxheap priority queue"<<minheap.top()<<endl;
          minheap.pop();
    }
    return 0;
    }
    
    
    