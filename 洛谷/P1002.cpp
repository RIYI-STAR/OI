#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long xb, yb, xm, ym;
    cin >> xb >> yb >> xm >> ym;
    vector<vector<long long>> map(xb + 1, vector<long long>(yb + 1));
    
    map[xm][ym] = 1;
    vector<long long> delta_x = {1, 1, -1, -1, 2, 2, -2, -2};
    vector<long long> delta_y = {2, -2, 2, -2, 1, -1, 1, -1};
    for (long long i = 0; i < 8; i++)
        if (xm + delta_x[i] >= 0 && xm + delta_x[i] < xb && ym + delta_y[i] >= 0 && ym + delta_y[i] < yb)
            map[xm + delta_x[i]][ym + delta_y[i]] = 1;

    vector<vector<long long>> dp(xb + 1, vector<long long>(yb + 1));
    dp[0][0] = 1;
    for (long long i = 1; i <= xb; i++)
        if (map[0][i] == 0)
            dp[0][i] = dp[0][i - 1];
    for (long long i = 1; i <= yb; i++)
        if (map[i][0] == 0)
            dp[i][0] = dp[i - 1][0];

    for (long long i = 1; i <= xb; i++)
        for (long long j = 1; j <= yb; j++)
            if (map[i][j] == 0)
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            

    // test print map
    cout << "map: " << endl;
    for (long long i = 0; i <= xb; i++)
    {
        for (long long j = 0; j <= yb; j++)
            cout << map[i][j] << ' ';
        cout << endl;
    }
    // test print dp
    cout << "dp: " << endl;
    for (long long i = 0; i <= xb; i++)
    {
        for (long long j = 0; j <= yb; j++)
            cout << dp[i][j] << ' ';
        cout << endl;
    }
    cout << dp[xb][yb] << endl;

    return 0;
}