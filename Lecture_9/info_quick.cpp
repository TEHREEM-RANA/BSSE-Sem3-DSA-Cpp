/* Quick Sort

Definition:
Quick Sort is a Divide and Conquer sorting algorithm.
It selects a pivot element and rearranges the array so that:
- Smaller elements go to the left
- Greater elements go to the right

It is one of the fastest sorting algorithms in practice.

--------------------------------------------------

Working Principle:

1. Choose a pivot element from the array.
2. Partition the array:
   - Elements smaller than pivot → left side
   - Elements greater than pivot → right side
3. Place pivot in its correct sorted position.
4. Recursively apply the same process on:
   - Left subarray
   - Right subarray
5. Repeat until the whole array is sorted.

--------------------------------------------------

Pivot Selection Methods:

1. First / Last Element:
   - Simple to implement
   - Worst case occurs when array is already sorted

2. Random Pivot:
   - Random element is chosen
   - Avoids fixed patterns
   - Gives good performance in practice

3. Median Pivot:
   - Middle value is chosen
   - Gives balanced partition (best case)
   - But finding median is costly (extra time)

--------------------------------------------------

Important Concept:

Quick Sort performance depends on pivot selection.

- Balanced partition → Fast (O(n log n))
- Unbalanced partition → Slow (O(n²))

Worst case happens when:
- Array is already sorted
- Pivot is always smallest or largest element

--------------------------------------------------

Time Complexity:

Best Case:    O(n log n)
Average Case: O(n log n)
Worst Case:   O(n²)

--------------------------------------------------

Space Complexity:

O(log n) → due to recursive call stack

(Note: It is in-place but uses recursion stack memory)

--------------------------------------------------

Stability:

Quick Sort is NOT Stable

Reason:
It swaps elements during partitioning.
Equal elements may change their original order.

--------------------------------------------------

Stable vs Unstable Sorting:

Stable Sorting:
Equal elements keep their original order.

Unstable Sorting:
Equal elements may change their order.

Quick Sort → Unstable

--------------------------------------------------

Flow Steps:

Start
   |
   v
Call quickSort(arr, low, high)
   |
   v
Check: low < high ?
   | No → Return
   | Yes
   v
Call partition()
   |
   v
Choose Pivot
   |
   v
Place pivot at correct position
   |
   v
Recursively call:
- quickSort(left subarray)
- quickSort(right subarray)
   |
   v
End

--------------------------------------------------

Advantages:

✔ Faster than Bubble, Selection, and Insertion Sort
✔ Very efficient for large datasets
✔ Cache friendly (works on same array)
✔ Widely used in real applications

--------------------------------------------------

Disadvantages:

✘ Not Stable
✘ Worst case O(n²)
✘ Recursive (uses stack memory)
✘ Performance depends on pivot choice

--------------------------------------------------

Summary Table:

Pivot Method        Advantage              Problem
---------------------------------------------------------
First / Last        Simple                Worst case on sorted array
Random Pivot        Practical & fast      Slight randomness
Median Pivot        Perfect split         Expensive to find median

--------------------------------------------------

Conclusion:

Quick Sort is a powerful and fast sorting algorithm.
Its efficiency depends on how well the pivot divides the array.
Better pivot → Faster sorting
Poor pivot → Slower sorting

*/

