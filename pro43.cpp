#include <iostream>
using namespace std;

char maxocc(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int num = 0;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            num = s[i] - 'a';
        }
        else
        {
            num = s[i] - 'A';
        }
        arr[num]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
        
    }
    char ch = 'a' + ans;
    return ch;
}

int main()
{
    string s;
    cin >> s;
    cout << maxocc(s) << endl;
}