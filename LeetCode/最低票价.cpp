#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    static int f1(vector<int> &days, vector<int> &costs, int j, vector<int> &dp) // 记忆化搜索
    {
        if (j >= days.size())
            return 0;

        if (dp[j] != -1)
            return dp[j];

        int res = INT_MAX;
        vector<int> last = {1, 7, 30};
        for (int i = 0; i < 3; i++)
        {
            int temp = j;
            while (temp < days.size() && days[j] + last[i] > days[temp])
            {
                temp++;
            }
            res = min(costs[i] + f1(days, costs, temp, dp), res);
        }
        dp[j] = res;
        // cout << "res: " << res << endl;
        return res;
    }

    int mincostTickets1(vector<int> &days, vector<int> &costs)
    {

        vector<int> dp(days.size(), -1);
        // cout << "dp: ";
        // int res = f1(days, costs, 0, dp);
        int res = f1(days, costs, 0, dp);
        // for (int i = 0; i < dp.size(); i++)
        // {
        //     cout << dp[i] << " ";
        // }
        return res;
    }

    int mincostTickets(vector<int> &days, vector<int> &costs) // 动态规划
    {
        int n = days.size();
        vector<int> last = {1, 7, 30};
        vector<int> dp(366, INT_MAX);
        dp[n] = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < 3; j++)
            {
                int temp = i;
                while (temp < n && days[i] + last[j] > days[temp])

                    temp++;
                dp[i] = min(dp[i], costs[j] + dp[temp]);
            }
        }
        return dp[0];
    }
};

int main()
{
    Solution s;
    vector<int> days = {1, 5, 7, 10};
    vector<int> costs = {2, 7, 15};
    int res = s.mincostTickets(days, costs);
    cout << res << endl;
    return 0;
}