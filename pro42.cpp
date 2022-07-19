#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int c = 0;
    vector<int> a;
    k = k - 1;
    int n = nums.size();
    int arr[n];
    for(int i = k; i < n; i++)
    {
        // a.push_back(nums[i]);
        arr[c] = nums[i];
        c++;
    }
    for(int i = 0; i < k; i++)
    {
        // a.push_back(nums[i]);
        arr[c] = nums[i];
        c++;
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    
}


int main()
{
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(-100);
    nums.push_back(3);
    nums.push_back(99);
    // nums.push_back(5);
    // nums.push_back(6);
    // nums.push_back(7);
    int k = 2;
    // for (int i : nums)
    // {
    //     cout << i << " ";
    // }
    
    rotate(nums, k);
}