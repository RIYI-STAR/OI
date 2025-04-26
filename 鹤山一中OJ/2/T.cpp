#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 20;

int main()
{
    vector<vector<int>> dp(MAXN + 1, vector<int>(MAXN + 1, 0));
    dp[1][1] = 1;
    for (int i = 2; i <= MAXN; i++)
        for (int j = 1; j <= i; j++)
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];

    int n;
    while (cin >> n)
    {
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            cout << dp[n][i] << " ";
            res += dp[n][i];
        }
        cout << endl << res << endl;
    }

    return 0;
}