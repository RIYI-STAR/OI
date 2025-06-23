#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        if (s == "") return 0;
        int n = s.size();
        vector<int> dp(n, 0);
        dp[0] = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '(')
                dp[i] = 0;
            else if (s[i] == ')')

                if (i - 1 - dp[i - 1] >= 0 && s[i - 1 - dp[i - 1]] == '(')
                {
                    dp[i] = dp[i - 1] + 2;
                    if (i - 2 - dp[i - 1] >= 0)
                        dp[i] += dp[i - 2 - dp[i - 1]];
                }
        }
        int res = 0;
        // for (int i = 0; i < n; i++)
        //     cout << dp[i] << " ";
        // cout << endl;
        for (int i = 0; i < n; i++)
            res = max(res, dp[i]);
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.longestValidParentheses("()()") << endl;
    return 0;
}