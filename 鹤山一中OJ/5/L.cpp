#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, n;
    while (cin >> a >> b >> n)
    {

        vector<int> dp(n + 1, 0);
        dp[a] = 1;
        dp[b] = 1;
        for (int i = 1; i <= n; i++)
        {
            int x = 0, y = 0;
            if (i - a >= 0) x = dp[i - a];
            if (i - b >= 0) y = dp[i - b];
            dp[i] = x + y + dp[i];
        }
        // for (int i = 1; i < n + 1; i++)
        //     cout << i << ':' << dp[i] << endl;
        cout << dp[n] << endl;
    }
    return 0;
}