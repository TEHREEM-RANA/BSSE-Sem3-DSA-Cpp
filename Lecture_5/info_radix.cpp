/* Radix Sort

Definition:
Radix Sort is a non-comparison based sorting algorithm
that sorts elements digit by digit.

It is mainly used for integers or data with fixed-length keys.

--------------------------------------------------

Key Points:

✔ Non-comparison based algorithm
✔ Works digit by digit (LSD → Least Significant Digit)
✔ Uses Counting Sort internally
✔ Efficient when number of digits (k) is small

--------------------------------------------------

Working Principle:

1. Find the maximum number in the array.
2. Start with least significant digit (1's place).
3. Sort all numbers based on current digit using Counting Sort.
4. Move to next digit (10's, 100's, etc.).
5. Repeat until all digits are processed.

--------------------------------------------------

Algorithm Steps:

Start:
- Begin the program

Find Maximum:
- Find largest element in array (maxVal)

Initialize:
- exp = 1 (represents digit place)

Loop:
- While (maxVal / exp > 0):
   → Apply Counting Sort on current digit
   → Update array with sorted values
   → exp = exp * 10 (move to next digit)

Output:
- Final sorted array

End:
- Program terminates

--------------------------------------------------

Stability:

Radix Sort is STABLE

Reason:
It uses Counting Sort internally,
and Counting Sort is a stable algorithm.
So equal elements maintain their original order.

--------------------------------------------------

Time Complexity:

Best Case:    O(nk)
Average Case: O(nk)
Worst Case:   O(nk)

Where:
n = number of elements
k = number of digits in largest number

Note:
If k is small → Radix Sort becomes very fast.

--------------------------------------------------

Space Complexity:

O(n + k)

Reason:
- Extra array is used for output
- Counting array is also used

--------------------------------------------------

Flow Steps:

Start
   |
   v
Find maximum element
   |
   v
Initialize exp = 1 (1's place)
   |
   v
Check: (max / exp) > 0 ?
   | No → End
   | Yes
   v
Apply Counting Sort on current digit
   |
   v
exp = exp * 10
   |
   v
Repeat loop

--------------------------------------------------

Advantages:

✔ Faster than comparison-based sorts for large numbers
✔ Stable sorting algorithm
✔ Efficient for fixed-length integer data

--------------------------------------------------

Disadvantages:

✘ Works mainly for integers or fixed-size data
✘ Uses extra memory
✘ Not suitable for all types of data

--------------------------------------------------

Stable vs Unstable Sorting:

Stable Sorting:
Equal elements keep their original order.

Unstable Sorting:
Equal elements may change order.

Radix Sort → Stable

--------------------------------------------------

Example (Simple):

Array: [170, 45, 75, 90]

Pass 1 (1's place):
→ [170, 90, 45, 75]

Pass 2 (10's place):
→ [170, 45, 75, 90]

Pass 3 (100's place):
→ [45, 75, 90, 170]

Final Sorted Array:
[45, 75, 90, 170]

--------------------------------------------------

Conclusion:

Radix Sort is a fast and stable algorithm
for sorting numbers with fixed number of digits.
Its performance depends on number of digits (k).

*/