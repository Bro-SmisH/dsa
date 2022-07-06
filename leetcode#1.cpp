#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int temp = n;
    int product = 1;
    while (temp > 0)
    {
        int dig = temp % 10;
        product *= dig;
        temp /= 10;
    }
    
    int tem = n;
    int sum = 0;
    while (tem > 0)
    {
        int dig = tem % 10;
        sum += dig;
        tem /= 10;
        
    }
    
    cout << product - sum;
}