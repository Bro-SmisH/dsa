#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int count = i;
        while (j <= i)
        {

            char ch = 65 + count - 1;
            cout << ch << " ";
            j++;
            // ch++;
            count++;
        }
        // ch = 'A' + i - 1;
        // ch++;
        cout << endl;

        i++;
    }
}