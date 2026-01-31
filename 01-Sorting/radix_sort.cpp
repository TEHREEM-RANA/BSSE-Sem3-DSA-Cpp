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
        int output[8];
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

 /* Radix Sort is stable

Reason:
Radix Sort sorts numbers digit by digit using Counting Sort, which is a stable algorithm.
Since digits are processed from least significant to most significant, and equal digits keep their order, the original order is preserved.

Best / Average / Worst Case: O(n × d)
(d = number of digits)
Space Complexity: O(n + k)
(k = base, usually 10)

 Radix Sort – Flow Steps
Start
   |
   v
Find maximum element in array
   |
   v
Initialize exp = 1
   |
   v
Is max/exp > 0? ---- No ---> End
   | Yes
   v
Initialize count[10] = 0
   |
   v
Count digits of elements using (arr[i]/exp)%10
   |
   v
Make cumulative count array
   |
   v
Place elements in output array (right to left)
   |
   v
Copy output to original array
   |
   v
exp = exp * 10 ---> Go to Is max/exp > 0?*/