/* Linear Search

Definition:
Linear Search is a simple searching algorithm
that checks each element of the array one by one
until the target element is found or the array ends.

It is also known as Sequential Search.

--------------------------------------------------

Key Points:

✔ Works on both sorted and unsorted arrays
✔ Checks elements one by one (sequentially)
✔ Easy to understand and implement
✔ No special requirements (sorting not needed)

--------------------------------------------------

Working Principle:

1. Start from the first element (index 0)
2. Compare each element with the target (key)
3. If match is found → return index
4. If no match is found till the end → return -1

--------------------------------------------------

Algorithm Steps:

Start:
- Begin the program

Input:
- Take array of size N
- Take target value (Key)

Iteration:
- Loop from i = 0 to N-1

Comparison:
- If arr[i] == Key → Element found → return index

If not found:
- After loop ends → return -1

Output:
- If found → display index
- Else → display "Element not found"

End:
- Program terminates

--------------------------------------------------

Time Complexity:

Best Case:    O(1)
→ Element found at first position

Average Case: O(n)
Worst Case:   O(n)
→ Element at last position or not found

--------------------------------------------------

Space Complexity:

O(1)
→ No extra memory required

--------------------------------------------------

Advantages:

✔ Simple and easy to implement
✔ Works on unsorted data
✔ No extra memory required

--------------------------------------------------

Disadvantages:

✘ Slow for large datasets
✘ Checks every element (time consuming)
✘ Less efficient than Binary Search

--------------------------------------------------

Example:

Array: [4, 2, 7, 1, 9]
Target: 7

Step 1:
Check 4 → not match

Step 2:
Check 2 → not match

Step 3:
Check 7 → Found at index 2

--------------------------------------------------

Conclusion:

Linear Search is the simplest searching algorithm.
It is useful for small or unsorted data,
but inefficient for large datasets.

*/
