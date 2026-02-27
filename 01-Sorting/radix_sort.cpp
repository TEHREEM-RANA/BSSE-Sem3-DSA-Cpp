#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = 8;

    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    for (int exp = 1; maxVal / exp > 0; exp *= 10)
    {
        int output[n];
        int count[10] = {0};

        for (int i = 0; i < n; i++)
        {
            int digit = (arr[i] / exp) % 10;
            count[digit]++;
        }

        for (int i = 1; i < 10; i++)
            count[i] = count[i] + count[i - 1];

        for (int i = n - 1; i >= 0; i--)
        {
            int digit = (arr[i] / exp) % 10;
            output[count[digit] - 1] = arr[i];
            count[digit]--;
        }

        for (int i = 0; i < n; i++)
            arr[i] = output[i];
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

 /*  Radix Sort Information

Radix Sort is a Non-Comparison based sorting algorithm.

Working Principle:
1. Find the maximum number in the array.
2. Sort numbers digit by digit (starting from least significant digit – LSD).
3. Use Counting Sort as a subroutine for each digit.
4. Repeat the process for tens, hundreds, etc.
5. Continue until all digit places are processed.

--------------------------------------------------

Radix Sort is STABLE

Reason:
It uses Counting Sort internally.
Counting Sort is stable, so equal elements keep their original order.

--------------------------------------------------

Time Complexity:

Best Case:    O(nk)
Average Case: O(nk)
Worst Case:   O(nk)

Where:
n = number of elements
k = number of digits in the largest number

If k is small → Radix Sort is very fast.

--------------------------------------------------

Space Complexity:

O(n + k)
(Extra array is used for counting and output)

--------------------------------------------------

Radix Sort – Flow Steps

Start
   |
   v
Find maximum element
   |
   v
Initialize exp = 1 (1's place)
   |
   v
Is (max/exp) > 0? ---- No ---> End
   | Yes
   v
Apply Counting Sort based on digit at exp
   |
   v
exp = exp * 10
   |
   v
Go back to check (max/exp) > 0

--------------------------------------------------

Advantages:
✔ Faster than comparison sorts for large numbers
✔ Stable
✔ Good for integers with limited digits

Disadvantages:
✘ Only works for integers (or fixed-length data)
✘ Extra memory required
✘ Not comparison-based

--------------------------------------------------

Stable Sorting:
A sorting algorithm is stable if equal elements keep their original order.

Unstable Sorting:
A sorting algorithm is unstable if equal elements may change their original order.



*/