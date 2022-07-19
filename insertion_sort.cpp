#include <iostream>
using namespace std;
// imp
int main()
{
    int n = 5;
    int arr[n] = {5,4,3,2,1};
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >= 0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            
            
        }
        arr[j+1] = temp;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}