#include <iostream>
using namespace std;

// Merge function
void merge(int arr[], int s, int mid, int e)
{
    // Sizes of two subarrays
    int n1 = mid - s + 1;
    int n2 = e - mid;

    // Temporary arrays
    int L[n1], R[n2];

    // Copy data into temp arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[s + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge temp arrays back into arr[]
    int i = 0, j = 0, k = s;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])   // <= for stability
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[]
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;

        // Left half
        mergeSort(arr, s, mid);

        // Right half
        mergeSort(arr, mid + 1, e);

        // Merge both halves
        merge(arr, s, mid, e);
    }
}

// Print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main()
{
    int arr[] = {38, 27, 43, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}


// more 
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



