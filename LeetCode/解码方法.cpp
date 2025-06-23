#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    int f1(string s, int n, vector<int> &dp)
    {
        if (n == s.length())
            return 1;

        if (dp[n] != -1)
            return dp[n];

        if (s[n] == '0')
            return 0;

        int ans = f1(s, n + 1, dp);
        if (n + 1 < s.length() && (s[n] - '0') * 10 + (s[n + 1] - '0') <= 26)
            ans += f1(s, n + 2, dp);
        dp[n] = ans;
        return ans;
    }

    int f2(string s)
    {
        vector<int> dp(s.length() + 1, 0);
        dp[s.length()] = 1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                dp[i] = 0;
            else
            {
                dp[i] = dp[i + 1];
                if (i + 1 < s.length() && (s[i] - '0') * 10 + (s[i + 1] - '0') <= 26)
                    dp[i] += dp[i + 2];
            }
        }
        return dp[0];
    }

    int f3(string s)
    {
        int a = 1;
        int b = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                b = a;
                a = 0;
            }
            else
            {
                int temp = a;
                if (i + 1 < s.length() && (s[i] - '0') * 10 + (s[i + 1] - '0') <= 26)
                    temp += b;
                b = a;
                a = temp;
            }
        }
        return a;
    }

    int numDecodings(string s)
    {
        vector<int> dp(s.length(), -1);
        // return f1(s, 0, dp);
        // return f2(s);
        return f3(s);
    }
};

int main()
{
    Solution s;
    cout << s.numDecodings("10") << endl;
    return 0;
}