#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {4, 12, 8, 10};
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
}