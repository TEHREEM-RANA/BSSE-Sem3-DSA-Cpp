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
✅ Bubble Sort is stable.
Reason:
In bubble sort, we only swap adjacent elements if they are in the wrong order.
This means equal elements never change their relative order, so the original order is preserved

Best Case: O(n) (already sorted)
Average Case: O(n²)
Worst Case: O(n²)
Space Complexity: O(1) (in-place)

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
Is j < n-i-1? ---- No ---> i = i + 1 ---> Go to Is i < n-1?
   | Yes
   v
Is arr[j] > arr[j+1]? ---- No ---> j = j + 1 ---> Go to Is j < n-i-1?
   | Yes
   v
Swap arr[j] and arr[j+1]
   |
   v
j = j + 1 ---> Go to Is j < n-i-1?



*/