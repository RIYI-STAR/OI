#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int begin;
    int end;
};

bool cmp(Node a, Node b)
{
    return a.end < b.end;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<Node> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].begin;
        for (int i = 0; i < n; i++)
            cin >> v[i].end;
        sort(v.begin(), v.end(), cmp);
        int res = 0;
        int end = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].begin >= end)
            {
                res++;
                end = v[i].end;
            }
        }
        cout << res << endl;
    }
    return 0;
}