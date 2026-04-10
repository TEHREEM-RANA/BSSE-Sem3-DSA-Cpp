

#include <iostream>
using namespace std;

//  Heapify function (tree ko fix karta hai)
void heapify(int arr[], int n, int i) {
    int largest = i;        // assume root is largest
    int left = 2*i + 1;     // left child
    int right = 2*i + 2;    // right child

    // check left child
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // check right child
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // agar largest change ho gaya
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // recursively heapify subtree
        heapify(arr, n, largest);
    }
}

//  Main Heap Sort function
void heapSort(int arr[], int n) {

    //  STEP 1: Build Max Heap
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    //  STEP 2: Extract elements one by one
    for (int i = n - 1; i > 0; i--) {

        // swap root with last element
        swap(arr[0], arr[i]);

        // 🔁 STEP 3: Heapify reduced heap
        heapify(arr, i, 0);
    }
}

//  Print function
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

//  Driver code
int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = 5;

    heapSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
