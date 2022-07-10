#include <iostream>
using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap_alt(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }

    print_array(arr, n);
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);

    swap_alt(arr, size);
}