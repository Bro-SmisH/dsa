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
            cout << i+1;
            j++;
        }
        cout << endl;
        i++;
    }
    
    
}