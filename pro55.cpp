#include <iostream>
using namespace std;

bool binarysearch(int *arr, int i, int j, int k)
{
    if (i > j)
    {
        return false;
    }
    int mid = (i + j) / 2;

    if (arr[mid] == k)
    {
        /* code */
        return true;
    }
    
    if (arr[mid < k])
    {
        return binarysearch(arr, mid + 1, j, k);
    }
    else
    {
        return binarysearch(arr, i, mid - 1, k);
    }    
}



int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 6;
    int key = 4;
    int i = 0;
    int j = n-1;
    cout << binarysearch(arr, i, j, key);

}