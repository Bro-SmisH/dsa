//{ Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;

// } Driver Code Ends
/*Complete the function below*/

class Solution
{
public:
    bool ispalindrome(int n)
    {
        string s = to_string(n);
        for (int i = 0; i <= s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - 1 - i])
                return 0;
        }
        return 1;
    }

    int PalinArray(int a[], int n)
    {
        bool flag = true;
        for (int i = 0; i <= to_string(n).length(); i++)
        {
            if (ispalindrome(i) == 0)
                flag = 0;
            cout << flag << endl;
        }
        if (flag == 0)
            return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.PalinArray(a, n) << endl;
    }
}
// } Driver Code Ends