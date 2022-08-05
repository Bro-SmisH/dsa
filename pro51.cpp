#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 
                     5, 6, 7, 8, 
                     9, 10, 11, 12};
    // for (int i = 0; i < 4; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             cout << arr[j][i] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = 2; j >= 0; j--)
    //         {
    //             cout << arr[j][i] << " ";
    //         }
    //     }
    // }
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j <= 3/2; j++)
            {
                swap(arr[j][i], arr[3 - j - 1][i]);
            }
            
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[j][i] << " ";
        }
        
    }
    
    
}