#include <bits/stdc++.h>
using namespace std;

double findmedian(vector<int> &v1, vector<int> &v2)
{
    vector<int> v3[v1.size() + v2.size()];
    double ans = 0;
    int size_a = v1.size();
    int size_b = v2.size();
    int k = 0;
    for (int i = 0; j < size_a; i++)
    {
        v3[k++] = v1[i];
    }
    for (int i = 0; i < size_b; i++)
    {
        v3[k++] = v2[i];
    }

    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());

    int size_c = v3.size();

    if (size_c % 2 == 0)
    {
        ans = v3[size_c / 2] + v3[(size_c / 2) - 1];
        ans = ans / 2;
    }
    else
    {
        ans = v3[(size_c - 1) / 2];
    }
    return ans;
}

int main()
{
    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(4);

    v2.push_back(3);
    cout << findmedian(v1, v2);
    return 0;
}