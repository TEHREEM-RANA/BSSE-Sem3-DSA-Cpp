
#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5; // current size of array

    // 🔹 Access (O(1))
    cout << "Access element at index 2: " << arr[2] << endl;

    // 🔹 Insertion at End (O(1))
    arr[n] = 60;
    n++;
    cout << "\nAfter insertion at end:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // 🔹 Insertion at Specific Position (O(n))
    int pos = 2, value = 25;
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1]; // shifting right
    }
    arr[pos] = value;
    n++;

    cout << "\n\nAfter insertion at position " << pos << ":\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // 🔹 Deletion at End (O(1))
    n--;
    cout << "\n\nAfter deletion from end:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // 🔹 Deletion at Specific Position (O(n))
    pos = 2;
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // shifting left
    }
    n--;

    cout << "\n\nAfter deletion from position " << pos << ":\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // 🔹 Searching (Linear Search) O(n)
    int key = 40;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "\n\nElement " << key << " found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\n\nElement not found";

    return 0;
}