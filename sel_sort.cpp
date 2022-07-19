#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {3, 4, 2, 5, 1};
    for (int i = 0; i < n - 1; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[m])
            {
                m = j;
            }
   
        }
        swap(arr[m], arr[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}