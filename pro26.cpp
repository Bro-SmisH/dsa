#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a = 0, b = 1;
    cout << a << " ";
    cout << b << " ";

    for (int i = 0; i < n - 2; i++)
    {
        int sum = a + b;

        cout << sum << " ";
        a = b;
        b = sum;
    }
}