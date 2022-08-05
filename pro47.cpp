#include <iostream>
using namespace std;

string rem_dup(string s)
{
    int i = 0;
    while(s.length() != 0 && i < s.length()-1)
    {
        if(s[i] == s[i+1])
        {
            s.erase(i,2);
            i--;
        }
        else
        {
            i++;
        }
    }
    return s;
}

bool ispalindrome(int n)
    {
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[s.length() - 1 - i])
                return 0;
        }
        return 1;
    }

void printArray(int arr[], int n) {
    // code here
    for(int i : arr)
    {
        cout << i << " ";
    }
}

int main()
{
    // string s = "abbaca";
    // cout << rem_dup(s);
    // cout << s.length();
    // int n = 111;
    // cout << to_string(n).length();
    // cout << ispalindrome(121);
    int arr[3] = {121, 131, 20};
    // printArray(arr, 3);
    cout << arr[3];
}