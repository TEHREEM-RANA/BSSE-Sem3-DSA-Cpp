  /* Merge Sort

Definition:
Merge Sort is a Divide and Conquer sorting algorithm.
It works by breaking the array into smaller parts,
sorting those parts, and then merging them back
together in a sorted manner.

--------------------------------------------------

Working Principle:

1. Divide the array into two halves.
2. Recursively sort both halves.
3. Merge the two sorted halves into one sorted array.
4. Repeat until the entire array is sorted.

Key Idea:
Divide → Conquer → Merge

--------------------------------------------------

Algorithm:

Start:
- Begin the process

Divide:
- Find middle index:
  mid = left + (right - left) / 2

Conquer (Recursive Calls):
- mergeSort(arr, left, mid)
- mergeSort(arr, mid + 1, right)

Combine (Merge):
- Merge both sorted halves using merge() function

Output:
- Final sorted array

End:
- Terminate program

--------------------------------------------------

Stability:

Merge Sort is STABLE

Reason:
During merging, if two elements are equal,
the element from the left subarray is placed first.
So their original order is preserved.

--------------------------------------------------

Time Complexity:

Best Case:    O(n log n)
Average Case: O(n log n)
Worst Case:   O(n log n)

Reason:
- Array is divided into log n levels
- Each level takes O(n) time to merge

--------------------------------------------------

Space Complexity:

O(n)

Reason:
- Extra temporary arrays are used during merging
- Not an in-place algorithm

--------------------------------------------------

Flow Steps:

Start
   |
   v
Call mergeSort(arr, left, right)
   |
   v
Check: left < right ?
   | No → Return
   | Yes
   v
Find mid = left + (right - left) / 2
   |
   v
Recursively call:
- mergeSort(left subarray)
- mergeSort(right subarray)
   |
   v
Call merge() function
   |
   v
Merge both sorted halves
   |
   v
End

--------------------------------------------------

Advantages:

✔ Stable sorting algorithm
✔ Always O(n log n) (no worst case slowdown)
✔ Good for large datasets
✔ Works well for Linked Lists
✔ Predictable performance

--------------------------------------------------

Disadvantages:

✘ Uses extra memory O(n)
✘ Not in-place
✘ Slower than Quick Sort in practice
✘ Recursive (uses stack memory)

--------------------------------------------------

Conclusion:

Merge Sort is a reliable and stable sorting algorithm.
It guarantees O(n log n) performance in all cases,
but requires extra memory due to merging.

*/
