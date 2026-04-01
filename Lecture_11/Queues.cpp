

#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 🔹 Queue creation
    queue<int> q;

    // 🔹 Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // 🔹 Print front and rear elements
    cout << "Front element: " << q.front() << endl;
    cout << "Rear element: " << q.back() << endl;

    // 🔹 Dequeue (remove front element)
    q.pop();
    cout << "Front after dequeue: " << q.front() << endl;

    // 🔹 Queue size
    cout << "Queue size: " << q.size() << endl;

    // 🔹 Check if empty
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is NOT empty" << endl;
    }

    // 🔹 Print all elements (front to rear)
    cout << "\nQueue elements (Front to Rear): ";
    queue<int> temp = q; // copy queue
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // 🔹 Clear queue completely
    while (!q.empty()) {
        q.pop();
    }

    cout << "\nAfter clearing queue:" << endl;
    cout << "Size: " << q.size() << endl;

    return 0;
}