/* 
Binary Search

Definition:
Binary Search is a searching algorithm used to find an element
in a sorted array by repeatedly dividing the search space into halves.

It works only on sorted data and provides fast searching.

--------------------------------------------------

Key Points:

✔ Works only on sorted array
✔ Divide and Conquer technique
✔ Very efficient for large datasets
✔ Time complexity is logarithmic O(log n)

--------------------------------------------------

Working Principle:

1. Start with two pointers:
   low = 0
   high = n - 1

2. Repeat while (low <= high):

   a. Find middle index:
      mid = low + (high - low) / 2

   b. Compare:
      - If arr[mid] == target → Element Found → return index
      - If arr[mid] < target → Search right side
        → low = mid + 1
      - If arr[mid] > target → Search left side
        → high = mid - 1

3. If element not found:
   return -1

--------------------------------------------------

Algorithm Steps:

Start:
- Begin the program

Initialization:
- low = 0
- high = n - 1

Loop:
- While low <= high:
   → calculate mid
   → compare with target
   → update low or high accordingly

Termination:
- If found → return index
- If not found → return -1

End:
- Program terminates

--------------------------------------------------

Time Complexity:

Best Case:    O(1)
→ Element found at middle

Average Case: O(log n)
Worst Case:   O(log n)

--------------------------------------------------

Space Complexity:

O(1)  → Iterative version (no extra memory)

Note:
Recursive version uses O(log n) stack space

--------------------------------------------------

Conditions to Apply Binary Search:

✔ Data must be sorted
✔ Random access required (array, not linked list)
✔ Access time should be constant O(1)

--------------------------------------------------

Advantages:

✔ Very fast searching (logarithmic time)
✔ Efficient for large datasets
✔ Reduces search space quickly

--------------------------------------------------

Disadvantages:

✘ Works only on sorted data
✘ Not suitable for linked lists
✘ Slightly complex than linear search

--------------------------------------------------

Example:

Array: [1, 3, 5, 7, 9]
Target: 7

Step 1:
mid = 2 → value = 5 → go right

Step 2:
mid = 3 → value = 7 → Found

--------------------------------------------------

Conclusion:

Binary Search is one of the most efficient searching algorithms.
It reduces the problem size by half at each step,
making it much faster than linear search.

*/