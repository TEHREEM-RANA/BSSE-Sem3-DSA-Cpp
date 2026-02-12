
#include <iostream>
using namespace std;

int main()
{
    // Array must be sorted
    int arr[5] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter number to search: ";
    cin >> key;

    int start = 0;
    int end = 4;
    int mid;
    int found = -1;

    while(start <= end)
    {
        mid = (start + end) / 2;

        if(arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if(found != -1)
        cout << "Element found at index: " << found;
    else
        cout << "Element not found!";

    return 0;
}

// 🔹 Binary Search works only on sorted array
// 🔹 Binary Search time complexity = O(log n)
// 🔹 Binary Search  time complexity
// Case	      Complexity
// Best Case	     O(1)
// Worst Case	    O(log n)
// Average Case	O(log n)

// space complexity
