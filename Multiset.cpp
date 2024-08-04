#include<iostream>
#include<set>
using namespace std;

int main(){
multiset<int>Mymultiset;

//inserted element
Mymultiset.insert(20);
Mymultiset.insert(30);
Mymultiset.insert(10);
Mymultiset.insert(20);



//Dsplay the  element 

cout<<"Multiset after inserting element in set"<<endl;
for(const auto&elem:Mymultiset){
    cout<<elem<<endl;
}
//search the occurance element in set

int searchElement=40;
if(Mymultiset.find(searchElement) !=Mymultiset.end()){
    cout<<"it is search elemtn available in set="<<searchElement<<endl;
    
}
else{
    cout<<"is is not available in set"<<searchElement<<endl;
}

//remove the element in set

Mymultiset.erase(Mymultiset.find(30));

//Display multilple set after removal

cout<<"Multiset after removal element in set"<<endl;
for(const auto&elem:Mymultiset){
    cout<<elem<<endl;
}

return 0;
}