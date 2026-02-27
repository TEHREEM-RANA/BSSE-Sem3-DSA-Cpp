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
 
/*  Selection Sort Information

Selection Sort is a Comparison-based sorting algorithm.

Working Principle:
1. Assume first element is minimum.
2. Compare it with remaining elements.
3. Find actual minimum element.
4. Swap minimum with first element.
5. Repeat for remaining array.

--------------------------------------------------

Selection Sort is NOT Stable

Reason:
It swaps minimum element with first element.
This may change relative order of equal elements.

--------------------------------------------------

Time Complexity:

Best Case:    O(n²)
Average Case: O(n²)
Worst Case:   O(n²)

--------------------------------------------------

Space Complexity:

O(1)  → In-place sorting

--------------------------------------------------

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
Set minIndex = i
   |
   v
Search minimum element in remaining array
   |
   v
Swap arr[minIndex] with arr[i]
   |
   v
i++ ---> Repeat

--------------------------------------------------

Advantages:
✔ Simple implementation
✔ Fewer swaps compared to Bubble Sort
✔ In-place sorting

Disadvantages:
✘ Not stable
✘ Always O(n²)
✘ Not efficient for large datasets

*/