
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
        // mid = (start + end) / 2;
        int mid = start + (end - start) / 2;

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
