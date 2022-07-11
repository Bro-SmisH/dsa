#include <iostream>
using namespace std;

void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort_zeroone(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int n = 8;
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sort_zeroone(arr, n);
    print_arr(arr, n);
}