#include <iostream>
using namespace std;

int sum(int *arr, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int s = 0;
    if(n == 1)
    {
        return arr[0];
    }
    s = arr[0] + sum(arr+1, n-1);
    return s;
    
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    cout << sum(arr, size);
}