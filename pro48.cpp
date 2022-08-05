#include <iostream>
using namespace std;

// linear search
bool ispresent(int arr[][4], int target, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            if (arr[i][j] == target)
            {
                /* code */
                return 1;
            }
            
        }
        
    }
    return 0;
    
}


int main()
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
    int target;
    cin >> target;

    if (ispresent(arr, target, 3, 4))
    {
        /* code */
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    
}