#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    nums1.erase(nums1.begin() + (m-n), nums1.end());
    for(int i = 0; i < n; i++)
    {
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(), nums1.end());
}

int main(){
    // int n;
    // cin >> n;
    // int ans = 0;
    // int temp = n;
    // while (n > 0)
    // {
    //     int rem = n % 2;
    //     ans = ans * 10 + rem;
    //     n /= 2;
    // }
    // int sol = 0;
    // int i = 0;
    // while (ans > 0)
    // {
    //     int rem = ans % 10;
    //     if (rem == 1)
    //     {
    //         sol = sol * 10 + 0;
    //     }
    //     else
    //     {
    //         sol = sol * 10 + 1;
    //     }
    //     ans /= 10;
    //     i++;
    // }
    // int a = 0;
    // while (sol > 0)
    // {
    //     int dig = sol % 10;
    //     int count = 0;
    //     a = a + dig * (2 ^ (i - count - 1));
        

    //     count++;
        
    // }
    // cout << a;

    vector<int> nums1[6] = {1,2,3,4,5,6};
    vector<int> nums2[3] = {2,5,6};
    int m = 6;
    int n = 3;
    // merge(nums1, m, nums2, n);

    return ;

}