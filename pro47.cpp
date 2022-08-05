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

int main()
{
    string s = "abbaca";
    // cout << rem_dup(s);
    // cout << s.length();
    // int n = 111;
    // cout << to_string(n).length();
}