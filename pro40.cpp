#include <iostream>
using namespace std;

// int bin_search(int arr[], int n, int i, int j, int k)
// {
//     i = 0;
//     j = n - 1;
//     while (i <= j)
//     {
//         int mid = (i + j) / 2;
//         if (k == arr[mid])
//         {
//             return mid;
//         }
//         else if (k > arr[mid])
//         {
//             i = mid + 1;
//         }
//         else if (k < arr[mid])
//         {
//             j = mid - 1;
//         }
//     }
//     return -1;
// }

// int pivot_ele(int arr[], int n)
// {
//     int s = 0, e = n - 1;

//     while (s < e)
//     {
//         int mid = (s + e) / 2;
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//     }
//     return s;
// }

int p()
{
    int i, j;
    int n = 5;
    int arr[n] = {7, 9, 1, 2, 3};
    int k = 2;
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
    int pivot = s;
    if (arr[pivot] < k < arr[n - 1])
    {
        i = pivot;
        j = n - 1;
        while (i <= j)
        {
            int mid = (i + j) / 2;
            if (k == arr[mid])
            {
                return mid;
            }
            else if (k > arr[mid])
            {
                i = mid + 1;
            }
            else if (k < arr[mid])
            {
                j = mid - 1;
            }
        }
        return -1;
    }
    else
    {
        i = 0;
        j = pivot;
        while (i <= j)
        {
            int mid = (i + j) / 2;
            if (k == arr[mid])
            {
                return mid;
            }
            else if (k > arr[mid])
            {
                i = mid + 1;
            }
            else if (k < arr[mid])
            {
                j = mid - 1;
            }
        }
        return -1;
    }
}

int main()
{
    cout << p();
}