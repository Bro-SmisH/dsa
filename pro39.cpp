#include <iostream>
using namespace std;

int pivot_ele(int arr[], int n)
{
    int s = 0, e = n - 1;
    
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return arr[s];
}

int main()
{
    int n = 5;
    // int m = INT8_MAX;
    int arr[5] = {7, 9, 1, 2, 3};

    cout << pivot_ele(arr, n) << endl;
}