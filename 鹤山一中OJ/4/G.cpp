#include <iostream>
#include <vector>
using namespace std;

    
int main()
{
    int n;
    while (cin >> n)
    {
        vector<vector<int>> arr(n+1, vector<int>(n+1));
        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=i;j++)
                cin >> arr[i][j];

        vector<vector<int>> dp(n+1, vector<int>(n+1));
        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=i;j++)
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j])+arr[i][j];

        //test
        // cout << "test:" << endl;
        // for(int i = 0;i<=n;i++)
        // {
        //     for(int j = 0;j<=n;j++)
        //         cout << dp[i][j] << ' ';
        //     cout << endl;
        // }

        int res = 0;
        for (int i = 1;i<=n;i++)
            res = max(res, dp[n][i]);
        cout << res << endl;
    }
    return 0;
}