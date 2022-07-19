#include <iostream>
#include <vector>
using namespace std;

bool poss(vector<int> arr, int n, int m, int mid)
{
    int pagesum = 0;
    int stucount = 1;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            stucount++;
            if (stucount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    int i = 0;
    int sum = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        n++;
        sum += boards[i];
    }
    int ans = -1;
    int j = sum;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (poss(boards, n, k, mid))
        {
            ans = mid;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n = 4;
    int k = 2;
    vector<int> boards[n] = {5, 5, 5, 5};
    cout << findLargestMinDistance(boards, k);
    return 0;
}
