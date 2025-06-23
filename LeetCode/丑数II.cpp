#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int nthUglyNumber(int n) {
            vector<int> dp(n + 1, 0);
            dp[1] = 1;
            for (int i = 2, i2 = 1, i3 = 1, i5 = 1, a, b, c; i <= n; i++) {
                a = dp[i2] * 2;
                b = dp[i3] * 3;
                c = dp[i5] * 5;
                int cur = min(a, min(b, c));
                if (cur == a)
                    i2++;
                if (cur == b)
                    i3++;
                if (cur == c)
                    i5++;
                dp[i] = cur;
            }
            // for (int i = 1; i <= n; i++)
            //     cout << dp[i] << " ";
            return dp[n];
        }
    };

int main()
{
    Solution s;
    cout << s.nthUglyNumber(10) << endl;
    return 0;
}