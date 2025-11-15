#include <iostream>
#include <map>
#include <vector>
using namespace std;

int sum(string n, int l, int r, map<string, int> mp)
{
    int res = 0;
    for (int i = l; i <= r; i++)
        for (int j = i; j <= r; j++)
        {
            string tmp = n.substr(i, j - i + 1);
            if (mp[tmp] == 1)
                res++;
        }
    return res;
}

int main()
{
    int p, k;
    cin >> p >> k;
    string n;
    for (int i = 0; i < p; i++)
    {
        string tmp;
        cin >> tmp;
        n += tmp;
    }
    int s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < s; i++)
    {
        string tmp;
        cin >> tmp;
        mp[tmp] = 1;
    }

    //预处理
    

    // dp
    vector<vector<int>> dp(k + 1, vector<int>(n.size() + 1, 0));
    for (int i = 1; i <= k; i++)
        for (int j = 2; j <= n.size(); j++)
        {
            int res = 0;
            for (int l = j; l >= i; l--)
            {
                // cout << "s: " << n.substr(l, j - l + 1) << "  sum: " << sum(n, l - 1, j - 1, mp) << endl;
                res = max(sum(n, l - 1, j - 1, mp) + dp[i - 1][l - 1], res);
            }
            dp[i][j] = res;
            // cout << "test" << endl;
        }

    // print dp
    // for (int i = 1; i <= k; i++)
    // {
    //     for (int j = 1; j <= n.size(); j++)
    //         cout << dp[i][j] << " ";
    //     cout << endl;
    // }
    cout << dp[k][n.size()] << endl;

    return 0;
}
