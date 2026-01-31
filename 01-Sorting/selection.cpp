#include <iostream>
using namespace std;

int main() {
    int arr[6] = {4, 8, 9, 3, 2, 8};
    int n = 6;

    for (int i = 0; i < n; i++) {
        int minindex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[minindex] > arr[j]) {
                minindex = j;
            }
        }
      
        swap(arr[minindex], arr[i]);
    }

 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
 
/*  Selection Sort is not stable

Reason:
Selection Sort swaps the minimum element with the first element.
This swap can change the relative order of equal elements, so stability is not guaranteed.

Best Case: O(n²)
Average Case: O(n²)
Worst Case: O(n²)
Space Complexity: O(1) (in-place)

 Selection Sort – Flow Steps 
Start
   |
   v
Initialize i = 0
   |
   v
Is i < n-1? ---- No ---> End
   | Yes
   v
Set minindex = i
   |
   v
Initialize j = i+1
   |
   v
Is j < n? ---- No ---> Swap arr[minindex] and arr[i]; i = i+1 ---> Go to Is i < n-1?
   | Yes
   v
Is arr[j] < arr[minindex]? ---- No ---> j = j+1 ---> Go to Is j < n?
   | Yes
   v
Set minindex = j
   |
   v
j = j+1 ---> Go to Is j < n?



Stable Sorting: A sorting algorithm is stable if equal elements keep their original order.
Unstable Sorting: A sorting algorithm is unstable if equal elements may change their original order.

*/
