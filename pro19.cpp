#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        i++;
        cout << endl;
    }
    
}