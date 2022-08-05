#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int maxi = INT32_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
        /* code */
    }
    
    int ans;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
            
        }
        cout << sum << endl;
        if (maxi < sum)
        { 
            maxi = sum;
            ans = i;
        }
        
    }
    cout << "the largest roq sum is: " << maxi << endl;
    cout << "row no of the largest row sum is: " << ans << endl;
}