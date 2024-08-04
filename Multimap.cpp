#include <iostream>
#include <map>
using namespace std;
int main() {
    multimap<int,string> myMultimap;

    // Inserting elements
    myMultimap.insert((1, "Apple"));
    myMultimap.insert((2, "Banana"));
    myMultimap.insert((1, "Apricot"));
    myMultimap.insert((3, "Cherry"));
    myMultimap.insert((2, "Blueberry"));

    // Iterating through the multimap
    for (auto it = myMultimap.begin(); it != myMultimap.end(); ++it) {
        std::cout << it->first << " => " << it->second << '\n';
    }

    // Finding elements by key
    auto range = myMultimap.equal_range(2);
    std::cout << "Elements with key 2:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << " => " << it->second << '\n';
    }

    return 0;
}
