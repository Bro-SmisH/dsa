#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;
    int c = 0;
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int sr = 0, sc = 0, er = 2, ec = 2;
    int total = 9;
    while (c < total)
    {
        for (int i = sc; c < total && i <= ec; i++)
        {
            cout << arr[sr][i] << " ";
            ans.push_back(arr[sr][i]);
            c++;
        }
        sr++;
        for (int i = sr; c < total && i <= er; i++)
        {
            cout << arr[sr][i] << " ";
            ans.push_back(arr[i][ec]);
            c++;
        }
        ec++;
        for (int i = ec; c < total && i >= sc; i--)
        {
            cout << arr[sr][i] << " ";
            ans.push_back(arr[er][i]);
            c++;
        }
        er--;
        for (int i = er; c < total && i >= sr; i--)
        {
            cout << arr[sr][i] << " ";
            ans.push_back(arr[i][sc]);
            c++;
        }
        sc--;
        
    }
    
}