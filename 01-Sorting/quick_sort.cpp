#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];   // last element as pivot
    int i = low - 1;         // smaller element index

    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;   // pivot index
}

// QuickSort function (Recursive)
void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);   // left side
        quickSort(arr, pi + 1, high);  // right side
    }
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "\nSorted array:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
// more 


#include<iostream>
using namespace std;


int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}

int main() {

    int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}
/*  Quick Sort Information

Quick Sort is a Divide and Conquer algorithm.

Working Principle:
1. Choose a pivot element.
2. Place the pivot at its correct sorted position.
3. All elements smaller than pivot go to left side.
4. All elements greater than pivot go to right side.
5. Recursively apply the same process on left and right subarrays.

--------------------------------------------------

Quick Sort is NOT Stable

Reason:
Quick Sort swaps elements around the pivot.
During swapping, equal elements may change their relative order.
So stability is not guaranteed.

--------------------------------------------------

Time Complexity:

Best Case:    O(n log n)
Average Case: O(n log n)
Worst Case:   O(n²)

Worst case happens when:
- Array is already sorted (if first or last element is pivot)
- Pivot selection is poor

--------------------------------------------------

Space Complexity:

O(log n)  → due to recursive call stack
(Not completely in-place because recursion uses stack space)

--------------------------------------------------

Quick Sort – Flow Steps

Start
   |
   v
Call quickSort(arr, low, high)
   |
   v
Is low < high? ---- No ---> Return
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
Recursively call quickSort on:
Left Subarray (low to pi-1)
Right Subarray (pi+1 to high)
   |
   v
End

--------------------------------------------------

Advantages:
✔ Faster than Bubble, Selection and Insertion Sort
✔ Good for large datasets
✔ Average case very efficient

Disadvantages:
✘ Not Stable
✘ Worst case O(n²)
✘ Recursive (uses stack memory)

--------------------------------------------------

Stable Sorting:
A sorting algorithm is stable if equal elements keep their original order.

Unstable Sorting:
A sorting algorithm is unstable if equal elements may change their original order.

Quick Sort → Unstable
Selection Sort → Unstable
Merge Sort → Stable
Bubble Sort → Stable

*/