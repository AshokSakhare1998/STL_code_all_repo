#include<iostream>
#include<list>

using namespace std;
int main(){

list<int>lst={1,2,3,4,5};
//add element

lst.push_back(6);
lst.push_front(0);
lst.emplace_back(7);
lst.emplace_front(-1);


//access element
cout<<"first element "<<lst.front()<<end;
cout<<"last element "<<lst.back()<<end;


//iterator over element 
cout<<"Element ";
for (const auto $element :lst){
    cout<<element<<end;
}


//remove element 
lst.pop_back();
lst.pop_front();


//size and capacity
cout<<"size"<<lst.size()<,endl;
    return 0;

}