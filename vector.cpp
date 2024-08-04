#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int>vec ={1,2,3,4,5};
    
    // add the element 
    vec.push_back(6);
    vec.emplace_back(7);
    
    //access the random
    cout<<"element of index="<<vec[0]<<endl;
    cout<<"first element="<<vec.front()<<endl;
    cout<<"last element="<<vec.back()<<endl;
    
   // iterate the element 

     cout<<"index of  the element=";
    for(const auto &elem:vec){
        cout<<elem<<",";
    }
    cout<<endl;
   // cout<<"after remove the element"<<endl; 
   // remove the elements
    vec.pop_back();
    cout<<"after remove the element=";
    for(const auto &elem:vec){
        cout<<elem<<",";
    }
    cout<<endl;
    //size & capacity
    
    cout<<"size= "<<vec.size()<<endl;
    cout<<"capacity="<<vec.capacity()<<endl;
    return 0;
}