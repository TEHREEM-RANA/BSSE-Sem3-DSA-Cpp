#include <iostream>
using namespace std;
int main()
{
int arr[6] = {4, 8, 9, 3, 2, 8};
    int n = 6;
    for (int i = 0; i <n-1; i++)
    {
        bool swapped =false ;// choice for best case o(n)
       for (int j = 0; j < n-i-1; j++)
       {
          if (arr[j]> arr[j+1])
          {
               int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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
