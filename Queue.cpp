#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    // Enqueue elements
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Display the front element
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Display the back element
    std::cout << "Back element: " << myQueue.back() << std::endl;

    // Dequeue elements
    myQueue.pop();
    std::cout << "Front element after pop: " << myQueue.front() << std::endl;

    // Enqueue another element
    myQueue.push(40);
    std::cout << "Back element after pushing 40: " << myQueue.back() << std::endl;

    // Dequeue all elements
    while (!myQueue.empty()) {
        std::cout << "Dequeueing element: " << myQueue.front() << std::endl;
        myQueue.pop();
    }

    // Check if the queue is empty
    if (myQueue.empty()) {
        std::cout << "The queue is now empty." << std::endl;
    }

    return 0;
}
