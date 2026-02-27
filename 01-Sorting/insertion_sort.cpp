#include <iostream>
using namespace std;
int main()
{

int arr[6] = {4, 8, 9, 3, 2, 8};
    int n = 6;

for (int i = 1; i < n; i++)
{
    int key =arr[i];
    int j=i-1;
    while (j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
}


    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

 
    return 0;
}

/*  Insertion Sort Information

Insertion Sort is a Comparison-based sorting algorithm.

Working Principle:
1. Assume first element is already sorted.
2. Pick next element.
3. Compare it with sorted portion.
4. Insert it at correct position.
5. Repeat until whole array is sorted.

--------------------------------------------------

Insertion Sort is STABLE

Reason:
Equal elements are inserted without changing their relative order.

--------------------------------------------------

Time Complexity:

Best Case:    O(n)     (when already sorted)
Average Case: O(n²)
Worst Case:   O(n²)

--------------------------------------------------

Space Complexity:

O(1)  → In-place sorting

--------------------------------------------------

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
Compare key with previous elements
Shift larger elements one position ahead
   |
   v
Insert key at correct position
   |
   v
i++ ---> Repeat

--------------------------------------------------

Advantages:
✔ Efficient for small datasets
✔ Stable
✔ Good for nearly sorted arrays
✔ Simple implementation

Disadvantages:
✘ Not suitable for large datasets
✘ O(n²) in average and worst case

*/