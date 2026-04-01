#include <iostream>
using namespace std;
int main()
{

int arr[6] = {4, 8, 9, 3, 2, 8};
    int n = 6;

for (int i = 1; i < n-1; i++)
{
    int key =arr[i];
    int j=i-1;
    while (j>=0 && arr[j]>key)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
}


    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

 
    return 0;
}

