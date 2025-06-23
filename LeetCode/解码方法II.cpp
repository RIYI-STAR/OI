#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int f1(string s, int i, vector<int> &dp)
    {
        if (i == s.length())
            return 1;

        if (s[i] == '0')
            return 0;

        // if (dp[i] != -1)
        //     return dp[i];

        int ans;
        if (s[i] == '*')
        {
            for (int j = 1; j <= 9; j++)
            {
                ans = f1(s, i + 1, dp);
                if (s[i + 1] == '*')
                    for (int k = 1; k <= 9; k++)
                        if ((j) * 10 + (k) <= 26)
                            ans += f1(s, i + 2, dp);

                        else if (i + 1 < s.length() && (j) * 10 + (s[i + 1] - '0') <= 26)
                            ans += f1(s, i + 2, dp);
            }
        }
        else
        {
            ans = f1(s, i + 1, dp);
            if (i + 1 < s.length() && (s[i] - '0') * 10 + (s[i + 1] - '0') <= 26)
                ans += f1(s, i + 2, dp);
        }

        dp[i] = ans;
        return ans;
    }

    int numDecodings(string s)
    {
        vector<int> dp(s.length(), -1);
        return f1(s, 0, dp);
    }
};

int main()
{
    Solution s;
    cout << s.numDecodings("*");
}