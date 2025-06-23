#include <iostream>
#include <vector>
using namespace std;


class Solution {
    public:
        int distinctSubseqII(string s) {
            long long all = 1;
            long long n = s.size();
            long long mod = 1e9 + 7;
            vector<long long> dp(26);
            for (int i = 0; i < n; i++)
            {
                long long temp = (all - dp[s[i] - 'a'] + mod) % mod;
                all = all % mod + temp % mod;
                dp[s[i] - 'a'] = (dp[s[i] - 'a'] + temp) % mod;
            }
            return (all - 1 + mod) % mod;
        }
    };

//test
int main()
{
    Solution s;
    cout << s.distinctSubseqII("zchmliaqdgvwncfatcfivphddpzjkgyygueikthqzyeeiebczqbqhdytkoawkehkbizdmcnilcjjlpoeoqqoqpswtqdpvszfaksn") << endl;
}