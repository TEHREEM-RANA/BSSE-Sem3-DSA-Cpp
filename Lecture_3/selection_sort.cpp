#include <iostream>
using namespace std;

int main() {
    int arr[6] = {4, 8, 9, 3, 2, 8};
    int n = 6;

    for (int i = 1; i < n-1; i++) {
        int minindex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[minindex] > arr[j]) {
                minindex = j;
            }
        }
      
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;;
    }

 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
 
