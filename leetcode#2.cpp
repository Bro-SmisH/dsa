#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dig = n;
    int count = 0;
    while (dig > 0)
    {
        
        if (dig % 2 == 1)
        {
            count++;
        }
        
        
        dig /= 2    ;
        
    }

    cout << count;
    



}