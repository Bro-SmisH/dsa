#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
        {
            return false;
        }
        if (n == 1)
        {
            return true;
        }

        int temp = n;
        while (temp != 0)
        {
            if (temp % 2 == 1)
            {
                return false;
            }
            temp /= 2;
        }
        return true;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.isPowerOfTwo(n);
}