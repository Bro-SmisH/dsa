#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int temp = n;
    while (n > 0)
    {
        int rem = n % 2;
        ans = ans * 10 + rem;
        n /= 2;
    }
    int sol = 0;
    int i = 0;
    while (ans > 0)
    {
        int rem = ans % 10;
        if (rem == 1)
        {
            sol = sol * 10 + 0;
        }
        else
        {
            sol = sol * 10 + 1;
        }
        ans /= 10;
        i++;
    }
    int a = 0;
    while (sol > 0)
    {
        int dig = sol % 10;
        int count = 0;
        a = a + dig * (2 ^ (i - count - 1));
        

        count++;
        
    }
    cout << a;
}