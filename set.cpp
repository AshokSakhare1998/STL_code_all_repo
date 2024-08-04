#include<iostream>
#include<set>
using namespace std;
int main(){

set<int>Myset;

//insert my element 

Myset.insert(20);
Myset.insert(30);
Myset.insert(10);
Myset.insert(20);//Duplicate set not allowed

//Display the element 
for (const auto &elem:Myset){
    cout<<elem<<" "<<endl;
}

//search the element 
int searchElement=20;
if(Myset.find(searchElement) !=Myset.end()){
    cout<<searchElement<<"it is in set"<<endl;

}else{
    cout<<searchElement<<"it is in not set "<<endl;
}

//remove element 
Myset.erase(10);

cout<<"element in set after removal"<<endl;
for(const auto& elem:Myset){
    cout<<elem<<" ";

}
return 0;
}