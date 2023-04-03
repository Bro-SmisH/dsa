#include <iostream>
using namespace std;
#include <vector>

vector<int> targetf()
{
    int nums[4] = {2,7,11,13};
    int target = 9;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[i] + nums[j] == target)
            {
                return [0,1];
            }
        }
    }
}

int main()
{
    cout << targetf();
}