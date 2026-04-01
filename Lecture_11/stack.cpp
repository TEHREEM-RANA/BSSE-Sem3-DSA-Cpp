

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // 🔹 Stack creation
    stack<int> s;

    // 🔹 Push elements into stack
    s.push(10);
    s.push(20);
    s.push(30);

    // 🔹 Emplace (faster than push)
    s.emplace(40);

    // 🔹 Print top element
    cout << "Top element: " << s.top() << endl;

    // 🔹 Pop top element
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;

    // 🔹 Stack size
    cout << "Size of stack: " << s.size() << endl;

    // 🔹 Check if empty
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is NOT empty" << endl;
    }

    // 🔹 Print all elements (Top to Bottom)
    cout << "\nStack elements (Top to Bottom): ";
    stack<int> temp = s; // copy stack to preserve original
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // 🔹 Clear stack completely
    while (!s.empty()) {
        s.pop();
    }

    cout << "\nAfter clearing stack:" << endl;
    cout << "Size: " << s.size() << endl;

    return 0;
}