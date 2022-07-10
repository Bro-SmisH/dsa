#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {4, 12, 8, 10};
    int size = sizeof(arr) / sizeof(int);
    // by using a new array
    // int rev_arr[size];
    // for (int i = 0; i < size; i++)
    // {
    //     rev_arr[i] = arr[size - i - 1];
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << rev_arr[i] << " ";
    // }

    // by swapping
    
    for (int i = 0; i <= size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}