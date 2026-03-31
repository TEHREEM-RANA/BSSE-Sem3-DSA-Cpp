#include <iostream>
using namespace std;
int main()
{
int arr[6] = {4, 8, 9, 3, 2, 8};
    int n = 6;
    for (int i = 0; i <n-1; i++)
    {
        bool swapped =false ;// choice for best case o(n)
       for (int j = 0; j < n-i-1; j++)
       {
          if (arr[j]> arr[j+1])
          {
               int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            swapped=true ;
          }
          
       }
        if (swapped==false )
        {
           break;
        }
        
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/* Bubble Sort

Definition:
Bubble Sort is a simple comparison-based sorting algorithm
that repeatedly compares adjacent elements
and swaps them if they are in the wrong order.

The largest elements "bubble up" to the end of the array.

--------------------------------------------------

Key Points:

✔ Comparison-based sorting algorithm
✔ Compares adjacent elements
✔ Repeated passes required
✔ In-place sorting (no extra memory)

--------------------------------------------------

Working Principle:

1. Start from the first element.
2. Compare adjacent elements.
3. If left element > right element → swap them.
4. Largest element moves to the end after each pass.
5. Repeat for remaining elements.
6. Stop early if no swaps occur (optimized version).

--------------------------------------------------

Algorithm Steps:

Start:
- Begin the program

Input:
- Take an unsorted array of size N

Passes:
- For i = 0 to N-1:
   → set swapped = false

   For j = 0 to N-i-1:
      → If arr[j] > arr[j+1]:
         → swap(arr[j], arr[j+1])
         → swapped = true

   → If swapped == false:
      → break (array already sorted)

Output:
- Print sorted array

End:
- Program terminates

--------------------------------------------------

Stability:

Bubble Sort is STABLE

Reason:
It swaps only adjacent elements,
so equal elements keep their original order.

--------------------------------------------------

Time Complexity:

Best Case:    O(n)
→ When array is already sorted (optimized version)

Average Case: O(n²)
Worst Case:   O(n²)

--------------------------------------------------

Space Complexity:

O(1)

Reason:
- Sorting is done in-place
- No extra memory required

--------------------------------------------------

Flow Steps:

Start
   |
   v
Initialize i = 0
   |
   v
Check: i < n-1 ?
   | No → End
   | Yes
   v
Initialize j = 0
   |
   v
Check: j < n-i-1 ?
   | No → i++ → Repeat outer loop
   | Yes
   v
Compare arr[j] and arr[j+1]
   |
   v
If arr[j] > arr[j+1]:
   → Swap
Else:
   → Continue
   |
   v
j++ → Repeat

--------------------------------------------------

Advantages:

✔ Simple and easy to understand
✔ Stable sorting algorithm
✔ Useful for small datasets
✔ Detects already sorted array (optimized)

--------------------------------------------------

Disadvantages:

✘ Very slow for large datasets
✘ Time complexity O(n²)
✘ Not efficient compared to advanced algorithms

--------------------------------------------------

Example:

Array: [5, 3, 2]

Pass 1:
[5, 3, 2] → [3, 5, 2] → [3, 2, 5]

Pass 2:
[3, 2, 5] → [2, 3, 5]

Pass 3:
Already sorted

--------------------------------------------------

Conclusion:

Bubble Sort is the simplest sorting algorithm,
but it is inefficient for large datasets.
It is mainly useful for learning purposes
and small inputs.

*/