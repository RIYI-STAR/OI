#include <iostream>
#include <vector>
using namespace std;

int pow(int n, int p)
{
    int res = 1;
    while (p > 0)
    {
        if (p & 1)
            res = res * n % 1000;
        n = n * n % 1000;
        p >>= 1;
    }
    return res;
}

int sum(int n, int p)
{
    return pow(n, p) % 1000;
}

int main()
{
    int n;
    const unsigned long long int MAXN = 100000;
    while (cin >> n)
    {
        int x = 999999999, y = 999999999;
        vector<int> mp(10000, -1);
        for (int i = 0; i <= MAXN; i++)
        {
            int s = sum(n, i) % 1000;
            // cout << s << ' ';
            if (mp[s] >= 0)
            {
                // cout << x << " " << y << endl;
                if (i + mp[s] < x + y)
                {
                    x = mp[s];
                    y = i;
                }
            }
            else
                mp[s] = i;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}