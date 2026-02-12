
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 25, 30, 45, 50};
    int key;
    int found = -1;

    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            found = i;
            break;   // stop loop when found
        }
    }

    if(found != -1)
        cout << "Element found at index: " << found;
    else
        cout << "Element not found!";

    return 0;
}
// 🔹 Linear Search works on unsorted array
// 🔹 Linear Search time complexity = O(n)
// 🔹 Linear Search time complexity
// Case	                           Complexity
// Best Case (first element)	            O(1)
// Worst Case (last element or not found)	O(n)
// Average Case	                        O(n)

// space complexity 
//  Linear Search Space Complexity = O(1)
