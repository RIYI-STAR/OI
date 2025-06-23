#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int w, v;
};

bool cmp(Node a, Node b)
{
    return a.w < b.w;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<Node> ns(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> ns[i].w;
        for (int i = 1; i <= n; i++)
            cin >> ns[i].v;
        sort(ns.begin(), ns.end(), cmp); 

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; i++)
            for (int j = ns[i].w; j <= m; j++)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - ns[i].w] + ns[i].v);

        //test
        // for (int i = 0; i <= n; i++)
        // {
        //     for (int j = 0; j <= m; j++)
        //         cout << dp[i][j] << ' ';
        //     cout << endl;
        // }

        cout << dp[n][m] << endl;
    }
    return 0;
}