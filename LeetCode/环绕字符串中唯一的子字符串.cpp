#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findSubstringInWraproundString(string s)
    {
        vector<int> dp(26, 0);
        int n = s.size();
        dp[s[0] - 'a'] = 1;
        for (int i = 1, len = 1; i < n;i++)
        {
            int lastWord = (s[i] - 'a' + 25) % 26;
            int thisWord = (s[i] - 'a' + 26) % 26;
            if ((s[i - 1] - 'a' + 26) % 26 == lastWord)
            
                len++;
            else 
                len = 1;
            dp[thisWord] = max(dp[thisWord], len);
        }
        int ans = 0;
        //test
        // for (int i = 0; i < 26;i++)
        //     cout << dp[i] << ' ';
        // cout << endl;
        for (int i = 0; i < 26;i++)
            ans += dp[i];
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.findSubstringInWraproundString("abcdefgggddepkghi") << endl;
}