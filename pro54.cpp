#include <iostream>
using namespace std;

bool ifpresent(int *arr, int n, int key)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return ifpresent(arr+1, n-1, key);
    }
    
    
} 

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int key = 2;
    bool ans = ifpresent(arr, n, key);
    if (ans)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    
}