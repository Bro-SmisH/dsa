#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 0;
    while(i < n){
        int space = i;
        while (space > 0){
            cout << " ";
            space--;
        }
        int j = i;
        while (j < n)
        {
            /* code */
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
    
}