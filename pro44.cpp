#include <iostream>
using namespace std;

char tolower(char s)
{
    if (s >= 'a' && s <= 'z')
    {
        return s;
    }
    else if (s >= 0 && s <= 9)
    {
        return s;
    }
    else
    {
        return s + 'a' - 'A';
    }
}

// char strip(char s[])
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
//         {

//         }

//     }

// }

bool ispalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }
        else if (isalnum(s[i] == 0))
        {
            i++;
        }
        else if (isalnum(s[j] == 0))
        {
            j--;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s = "Noon";
    cout << ispalindrome(s) << endl;
}