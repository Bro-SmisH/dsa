#include <iostream>
using namespace std;

string replace_spaces(string s)
{
    string st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            // st = st + "@40";
            st.push_back('@');
            st.push_back('4');
            st.push_back('0');
        }
        else
        {
            // st = st + s[i];
            st.push_back(str[i]);
        }
    }
    return st;
}

int main()
{
    string s = "my name is shivansh";
    cout << replace_spaces(s);
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }
}