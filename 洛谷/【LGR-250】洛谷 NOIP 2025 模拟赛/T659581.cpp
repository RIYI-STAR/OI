#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int mex(map<int, int> &a)
{
    int maxn = 0;
    map<int, int> mp;
    for(auto it: a)
    {
        maxn = max(maxn, it.first);
        mp[it.first] = 1;
    }

    int res = maxn + 1;
    for(int i = 0;i < maxn;i++)
    {
        if(!mp.count(i + 1)) res = min(res, i + 1);
    }
    return (res != maxn + 1) ? res : maxn + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n, q;
        cin >> n >> q;
        map<int, int> vs;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            vs[a] += b;
        }

        for (int i = 0; i < q; i++)
        {
            map<int, int> tmp = vs;
            int m;
            cin >> m;
        }
    }
} 