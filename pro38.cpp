#include <iostream>
using namespace std;

int sum(int arr[], int start, int end)
{
    int ans = 0;
    for (int i = start; i < end; i++)
    {
        ans = ans + arr[i];
    }
    return ans;
}

int pivot_index(int arr[], int n)
{
    int i = 0, j = n - 1;
    int mid = (i + j) / 2;
    while (i <= j)
    {
        if (sum(arr, i, mid) == sum(arr, mid, j))
        {
            return mid;
        }
        else if (sum(arr, i, mid < sum(arr, mid, j)))
        {
            mid = mid + 1;
        }
        else if (sum(arr, i, mid > sum(arr, mid, j)))
        {
            mid = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[3] = {1, 2, 3};
    int n = 3;
    cout << pivot_index(arr, n);
}