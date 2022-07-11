#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,2,1,1,3}
    int n = 6;
    int count[];
    int c;
    for (int i = 0; i < n; i++)
    {
        c = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
            
        }
        count[i] = c;
        
        
    }

}