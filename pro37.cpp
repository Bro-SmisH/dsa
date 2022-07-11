#include <iostream>
using namespace std;

int first_occ(int arr[], int n, int key)
{
    int i = 0;
    int ans = -1;
    int j = n - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            j = mid - 1;
        }
        else if (key > arr[mid])
        {
            i = mid + 1;
        }
        else if (key < arr[mid])
        {
            j = mid - 1;
        }
    }
    return ans;
}

int last_occ(int arr[], int n, int key)
{
    int i = 0;
    int ans = -1;
    int j = n - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            i = mid + 1;
        }
        else if (key > arr[mid])
        {
            i = mid + 1;
        }
        else if (key < arr[mid])
        {
            j = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n = 8;
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int key = 2;
    cout << first_occ(arr, n, key) << " ";
    cout << last_occ(arr, n, key);
}