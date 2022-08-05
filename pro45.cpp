#include <iostream>
using namespace std;

int main()
{
    string s = "test";
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int num = s[i] - 'a';
            arr[num]++;
        }
        else
        {
            int num = s[i] - 'A';
            arr[num]++;
        }
        
        
    }
    int maxi = INT32_MIN;
    int n;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            /* code */
            maxi = max(maxi, arr[i]);
            n = i;
        }
        
    }
    cout << maxi << " ";
    char c = n + 'a';
    cout << c << endl;
    
}