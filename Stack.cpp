#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>Mystack;
    
    //insert the elelemnt
    
   Mystack.push(10);
   Mystack.push(20);
   Mystack.push(30);
    
    //Display the top element "<<Mystack.top()<<endl;
    cout<<"Display the top element " <<Mystack.top()<<endl;
    
  //  //pop element top the stack
    Mystack.pop();
cout<<"Display the top element after poping "<<Mystack.top()<<endl;
    //push the another element 
    Mystack.push(40);
    cout<<"Display the top element after push another element "<<Mystack.top()<<endl;
    
    //pop all element
    
    while(!Mystack.empty()){
        cout<<"poping element"<<Mystack.top()<<endl;
        Mystack.pop();
    }
    //check if the stack is empty;
    if(Mystack.empty()){
        
        cout<<"stack is empty"<<endl;
    }
    return 0;
}