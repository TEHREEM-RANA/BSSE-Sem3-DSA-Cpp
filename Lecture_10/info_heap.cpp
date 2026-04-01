/*  Heap Sort

Definition:
Heap Sort is a comparison-based sorting algorithm that sorts an array using a binary heap data structure.
Heap Sort is similar to selection sort 

Working Principle
Build a Max Heap: 
Convert the array into a Max Heap.
Swap Root: Swap the root (largest element) with the last element in the heap.
Reduce Heap Size:
 Decrease the heap size by 1.
Heapify: 
Restore the Max Heap property by heapifying the root.
Repeat: 
Continue swapping and heapifying until the array is sorted.

Key Concepts

Build Max Heap
Rearrange the input array into a Max Heap.
Start from the last non-leaf node and move up to the root.

Heapify Function
Function signature: heapify(arr, n, i)
Steps:
Assume the root i is the largest.
Compare with the left child (2i + 1) and right child (2i + 2).
If a child is larger, swap it with the root.
Recursively heapify the affected sub-tree.

Sorting Process
While heap size > 1:
Swap the root with the last element.
Reduce heap size by 1.
Heapify the root.
After completion, the array is sorted in ascending order.

Characteristics
Stability: Heap Sort is not stable.
Reason: Equal elements may change their relative order due to swapping.
Time Complexity:
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n log n)
Space Complexity: O(1) → In-place sorting

Flowchart of Heap Sort
Start
   |
   v
Build Max Heap
   |
   v
Swap root with last element
   |
   v
Reduce heap size
   |
   v
Heapify root
   |
   v
Repeat until heap size = 1
   |
   v
End

Advantages
Always O(n log n)
In-place sorting (no extra memory)
Can be implemented iteratively (no recursion required)

Disadvantages
Costly: Heap sort is costly as the constants are higher compared to merge sort even if the time complexity is O(n log n) for both.
Unstable: Heap sort is unstable. It might rearrange the relative order.
Inefficient: Heap Sort is not very efficient because of the high constants in the time complexity.
*/
