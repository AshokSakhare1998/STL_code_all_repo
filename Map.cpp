#include<iostream>
#include<map>
using namespace std;
int main(){

    map<string,int>myMap;

    //insert the map 
    myMap["Apple"]=10;
    myMap["Banana"]=20;
    myMap["Orange"]=30;

    //Retrivalue for element
    cout<<"The key element for the 'Banana'"<<myMap["Banana"]<<endl;
//search key value pair
   if (myMap.find("Banana") != myMap.end()) {
        std::cout << "Key 'Banana' exists in the map." << std::endl;
    }

    //Removing the key pair value
    myMap.erase("Orange");
    //iterate the over the map
    for(const auto &entry:myMap){
        cout<<"The key pair value element=="<<entry.first<<endl;
    }
    return 0;
}