#include <iostream>
using namespace std;

// MERGE FUNCTION
void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[100];   // temporary array

    while(i <= mid && j <= high)
    {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // remaining left side
    while(i <= mid)
        temp[k++] = arr[i++];

    // remaining right side
    while(j <= high)
        temp[k++] = arr[j++];

    // copy back to original array
    for(int p = 0; p < k; p++)
        arr[low + p] = temp[p];
}


// RECURSIVE FUNCTION
void mergeSort(int arr[], int low, int high)
{
    if(low >= high)      // BASE CASE
        return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);       // left half
    mergeSort(arr, mid + 1, high);  // right half
    merge(arr, low, mid, high);     // combine
}


// MAIN
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    mergeSort(arr,0,n-1);

    cout << "\nSorted Array:\n";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}
/*  Merge Sort Information

Merge Sort is a Divide and Conquer algorithm.

Working Principle:
1. Divide the array into two halves.
2. Recursively sort both halves.
3. Merge the two sorted halves into one sorted array.
4. Repeat until the whole array is sorted.

--------------------------------------------------

Merge Sort is STABLE

Reason:
While merging, if two elements are equal,
the element from the left subarray is placed first.
So equal elements keep their original order.

--------------------------------------------------

Time Complexity:

Best Case:    O(n log n)
Average Case: O(n log n)
Worst Case:   O(n log n)

Reason:
Array is always divided into log n levels,
and merging at each level takes O(n) time.

--------------------------------------------------

Space Complexity:

O(n)  → because extra temporary array is used
(Not in-place)

--------------------------------------------------

Merge Sort – Flow Steps

Start
   |
   v
Call mergeSort(arr, low, high)
   |
   v
Is low < high? ---- No ---> Return
   | Yes
   v
Find mid = (low + high) / 2
   |
   v
Recursively call mergeSort on:
Left Subarray (low to mid)
Right Subarray (mid+1 to high)
   |
   v
Call merge() function
   |
   v
Merge two sorted halves into one sorted array
   |
   v
End

--------------------------------------------------

Advantages:
✔ Stable sorting algorithm
✔ Guaranteed O(n log n) in all cases
✔ Good for Linked Lists
✔ Works well for large datasets

Disadvantages:
✘ Uses extra memory (O(n))
✘ Slower than Quick Sort in practical cases
✘ Not in-place

--------------------------------------------------

Stable Sorting:
A sorting algorithm is stable if equal elements keep their original order.

Unstable Sorting:
A sorting algorithm is unstable if equal elements may change their original order.

Merge Sort → Stable
Quick Sort → Unstable
Selection Sort → Unstable
Bubble Sort → Stable

*/
