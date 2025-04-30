#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int x;
    int y;
};

int main()
{
    int n;
    while (cin >> n)
    {
        vector<Node> nodes(n);
        for (int i= 0; i < n; i++)
            scanf("[%d,%d]", &nodes[i].x, &nodes[i].y);
        int m;
        cin >> m;
        vector<int> p(m);
        for (int i= 0; i < m; i++)
            cin >> p[i];
        sort(p.begin(), p.end());
        for (int i = 0; i < n; i++)
        {
            int x = nodes[i].x;
            int y = nodes[i].y;
            if (x >= p[0])
            {
                for (int j = 0; j < m; j++)
                {
                    if (y < p[j])
                }
            }
        }
    }
    return 0;
}