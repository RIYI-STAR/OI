// P2249 【深基13.例1】查找
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        count[x]++;
    }
    map<int, int> res;
    int temp = 1;
    for (auto it = count.begin(); it != count.end(); it++)
    {
        res[it->first] = temp;
        temp += it->second;
    }
    // for (auto it = res.begin(); it != res.end(); it++)
    //     cout << it->first << ' ' << it->second << endl;
    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);
        if (!res[x])
            printf("-1 ");
        else
            printf("%d ", res[x]);
    }
}