#include <iostream>
using namespace std;
int main()
{

int arr[6] = {4, 8, 9, 3, 2, 8};
    int n = 6;
 for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

 
    return 0;
}

/*
 Insertion Sort is stable

Reason:
Insertion Sort only shifts elements and inserts the key at the correct position.
Equal elements are never swapped, so the original order remains unchanged.

Best Case: O(n) (already sorted)
Average Case: O(n²)
Worst Case: O(n²)
Space Complexity: O(1) (in-place)

 Insertion Sort – Flow Steps
Start
   |
   v
Initialize i = 1
   |
   v
Is i < n? ---- No ---> End
   | Yes
   v
Set key = arr[i]
   |
   v
Initialize j = i - 1
   |
   v
Is j >= 0 AND arr[j] > key? ---- No ---> Place key at arr[j+1]
   | Yes
   v
Shift arr[j] to arr[j+1]
   |
   v
j = j - 1 ---> Go to condition
   |
   v
i = i + 1 ---> Go to Is i < n?
*/