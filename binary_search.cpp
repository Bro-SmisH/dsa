#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (key == arr[mid])
        {
            return mid;
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
    return -1;
}

int main()
{
    int n = 6;
    int arr[n] = {4, 5, 6, 7, 8, 9};
    int key = 4;
    cout << binary_search(arr, n, key);
}