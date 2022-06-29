#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    
    while (i <= n)
    {
        int j = i;
        // int count = i;
        // while (j <= i)
        // {
            
        //     cout << count << " ";
        //     j++;
        //     count++;
        // }

        while (j < 2*i)
        {
            cout << j << " ";
            j++;
            // count++;
        }
        {
            /* code */
        }
        
        cout << endl;
        i++;
    }
}