#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    bool b = false;
    if (x < 0)
    {
        b = true;
        x = -x;
    }

    
    int y = 0;
    int temp = x;
    int count = 0;
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    
    for (int i = 0; i < count; i++)
    {
        int dig = x % 10;
        y = y * 10 + dig;
        x /= 10;
        
    }
    if (b == true)
    {
        cout << y * -1;
    }
    else
    {
        cout << y;
    }
    
    
}