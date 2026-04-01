#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int s, int e)
{
    int pivot = arr[e];   // last element as pivot
    int i = s - 1;        // smaller element index

    for(int j = s; j < e; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[e]);
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

 
