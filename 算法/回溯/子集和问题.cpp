#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int target = 9;
vector<int> nums = {4, 4, 5};
vector<int> res;

void x(int i, int sum)
{
    if (sum == target)
        {
            for (int k = 0; k < res.size(); k++)
                cout << res[k] << " ";
            cout << endl;
            return;
        }
    if (sum > target) return;
    for (int j = i; j < nums.size(); j++)
    {
        if (nums[j] == nums[j-1]) continue;
        res.push_back(nums[j]);
        x(j, sum + nums[j]);
        res.pop_back();
    }
}

int main()
{
    sort(nums.begin(), nums.end());
    x(0, 0);
    return 0;
}