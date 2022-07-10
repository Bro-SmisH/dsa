#include <iostream>
using namespace std;\


int main(){

    int a;
    int b;
    char op;
    cin >> a >> op >> b;


    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    
    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;s

    case '%':
        cout << a % b;
        break;

    default:
        break;
    }

}