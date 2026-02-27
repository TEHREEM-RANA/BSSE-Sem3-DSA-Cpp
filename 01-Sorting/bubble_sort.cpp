#include <iostream>
using namespace std;
int main()
{
int arr[6] = {4, 8, 9, 3, 2, 8};
    int n = 6;
    for (int i = 1; i <n; i++)
    {
        bool swapped =false ;// choice for best case o(n)
       for (int j = 0; j < n-i; j++)
       {
          if (arr[j]> arr[j+1])
          {
            swap(arr[j],arr[j+1]);
            swapped=true ;
          }
          
       }
        if (swapped==false )
        {
           break;
        }
        
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*
/*  Bubble Sort Information

Bubble Sort is a Comparison-based sorting algorithm.

Working Principle:
1. Compare adjacent elements.
2. If first element is greater than second, swap them.
3. Repeat this process for the whole array.
4. After each pass, largest element moves to its correct position.
5. Continue until array is sorted.

--------------------------------------------------

Bubble Sort is STABLE

Reason:
It only swaps adjacent elements.
Equal elements do not change their relative order.

--------------------------------------------------

Time Complexity:

Best Case:    O(n)     (when array is already sorted with optimized version)
Average Case: O(n²)
Worst Case:   O(n²)

--------------------------------------------------

Space Complexity:

O(1)  → In-place sorting

--------------------------------------------------

Bubble Sort – Flow Steps

Start
   |
   v
Initialize i = 0
   |
   v
Is i < n-1? ---- No ---> End
   | Yes
   v
Initialize j = 0
   |
   v
Is j < n-i-1? ---- No ---> i++ ---> Go to i < n-1?
   | Yes
   v
Is arr[j] > arr[j+1]? 
   | Yes ---> Swap
   | No  ---> Continue
   |
   v
j++ ---> Repeat

--------------------------------------------------

Advantages:
✔ Simple to understand
✔ Stable
✔ Good for small datasets

Disadvantages:
✘ Very slow for large datasets
✘ O(n²) time complexity

*/