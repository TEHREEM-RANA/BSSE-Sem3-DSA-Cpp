/* Selection Sort

Definition:
Selection Sort is a comparison-based sorting algorithm
that repeatedly finds the minimum element
from the unsorted part and places it at the beginning.

--------------------------------------------------

Key Points:

✔ Comparison-based sorting algorithm
✔ Divides array into sorted and unsorted parts
✔ Selects minimum element each time
✔ In-place sorting (no extra memory)

--------------------------------------------------

Working Principle:

1. Start from the first element.
2. Assume current element is the minimum.
3. Compare it with remaining elements.
4. Find the actual minimum element.
5. Swap it with the current position.
6. Move to next position and repeat.

--------------------------------------------------

Algorithm Steps:

Start:
- Begin the program

Input:
- Take an unsorted array of size N

Selection Process:
- For i = 1 to N-1:
   → minIndex = i

   For j = i+1 to N-1:
      → If arr[j] < arr[minIndex]
         → update minIndex = j

   Swap arr[minIndex] with arr[i]

Output:
- Print sorted array

End:
- Program terminates

--------------------------------------------------

Stability:

Selection Sort is NOT Stable

Reason:
It swaps the minimum element with the first element
of the unsorted part, which may change
the relative order of equal elements.

--------------------------------------------------

Time Complexity:

Best Case:    O(n²)
Average Case: O(n²)
Worst Case:   O(n²)

Reason:
Always checks all elements, even if array is sorted.

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
Set minIndex = i
   |
   v
Find minimum in remaining array
   |
   v
Swap arr[minIndex] with arr[i]
   |
   v
i++ → Repeat

--------------------------------------------------

Advantages:

✔ Simple and easy to understand
✔ Fewer swaps compared to Bubble Sort
✔ In-place sorting (no extra memory)

--------------------------------------------------

Disadvantages:

✘ Not stable
✘ Always O(n²) (no best case improvement)
✘ Not efficient for large datasets

--------------------------------------------------

Example:

Array: [64, 25, 12]

Step 1:
Find min → 12 → swap → [12, 25, 64]

Step 2:
Find min → 25 → no change

Step 3:
Already sorted

--------------------------------------------------

Conclusion:

Selection Sort is simple but inefficient for large data.
It is useful for small datasets or when memory is limited.

*/