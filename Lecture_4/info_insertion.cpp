/* Insertion Sort

Definition:
Insertion Sort is a simple comparison-based sorting algorithm
that builds the sorted array one element at a time
by inserting each element into its correct position.

--------------------------------------------------

Key Points:

✔ Comparison-based sorting algorithm
✔ Builds sorted portion step by step
✔ Works well for small or nearly sorted data
✔ In-place sorting (no extra memory)

--------------------------------------------------

Working Principle:

1. Assume the first element is already sorted.
2. Pick the next element (key).
3. Compare it with elements in the sorted part.
4. Shift larger elements one position to the right.
5. Insert the key at its correct position.
6. Repeat until the array is fully sorted.

--------------------------------------------------

Algorithm Steps:

Start:
- Begin the program

Input:
- Take an unsorted array of size N

Insertion Process:
- For i = 1 to N-1:
   → key = arr[i]
   → j = i - 1

   While (j >= 0 AND arr[j] > key):
      → shift arr[j] to arr[j + 1]
      → j--

   Place key at arr[j + 1]

Output:
- Print sorted array

End:
- Program terminates

--------------------------------------------------

Stability:

Insertion Sort is STABLE

Reason:
Equal elements are not swapped unnecessarily,
so their original order is preserved.

--------------------------------------------------

Time Complexity:

Best Case:    O(n)
→ When array is already sorted

Average Case: O(n²)
Worst Case:   O(n²)
→ When array is reverse sorted

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
Initialize i = 1
   |
   v
Is i < n ?
   | No → End
   | Yes
   v
Set key = arr[i]
   |
   v
Compare with previous elements
Shift larger elements right
   |
   v
Insert key at correct position
   |
   v
i++ → Repeat

--------------------------------------------------

Advantages:

✔ Simple and easy to implement
✔ Stable sorting algorithm
✔ Efficient for small datasets
✔ Very fast for nearly sorted arrays
✔ In-place (no extra memory)

--------------------------------------------------

Disadvantages:

✘ Slow for large datasets
✘ Time complexity O(n²) in average and worst case

--------------------------------------------------

Example:

Array: [5, 3, 4]

Step 1:
[5] → already sorted

Step 2:
Insert 3 → [3, 5]

Step 3:
Insert 4 → [3, 4, 5]

--------------------------------------------------

Conclusion:

Insertion Sort is a simple and efficient algorithm
for small or nearly sorted data.
However, it becomes slow for large datasets.

*/