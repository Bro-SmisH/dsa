#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    cout << ans << endl;
}