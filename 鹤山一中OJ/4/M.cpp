#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node
{
    int a, b;
};

bool cmp(Node a, Node b)
{
    return a.a < b.a;
}

int main()
{
    int m, n;
    while (cin >> m)
    {
        getchar();
        vector<Node> nodes(m);
        for (int i = 0; i < m; i++)
        {
            int t_a, t_b;
            scanf("[%d,%d]", &t_a, &t_b);
            getchar();
            Node temp;
            temp.a = t_a;
            temp.b = t_b;
            nodes[i] = temp;
        }
        cin >> n;
        vector<int> nums(n);
        int maxn = 0;
        for (int i = 0; i < n; i++)
        {
            int t_n;
            cin >> t_n;
            maxn = max(maxn, t_n);
            nums[i] = t_n;
        }
        sort(nodes.begin(), nodes.end(), cmp);
        sort(nums.begin(), nums.end());

        // test
        // for (int i = 0; i < m; i++)
        // {
        //     cout << "[" << nodes[i].a << "," << nodes[i].b << "]" << endl;
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << nums[i] << " ";
        // }
        // cout << endl;

        vector<int> dp(maxn + 1);
        int p = 0;
        for (int i = 0; i <= n; i++)
        {
            while (nums[p] < nodes[i].a)
                p++;
            // cout << "p: " << p << "n: " << nums[p] << endl;
            dp[nums[p]] = max(dp[nums[p]], nodes[i].b);
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            // cout << nums[i] << ':' << dp[nums[i]] << " ";
            if (dp[nums[i]] != 0)
                res++;
            if (dp[nums[i]] >= maxn)
                break;
        }
        cout << res << endl;
    }
    return 0;
}


// 3
// [2,6] [4,9] [5,100]
// 3
// 4 7 9