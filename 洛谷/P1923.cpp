// P1923 【深基9.例4】求第 k 小的数

#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

int main()
{
    int n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    for (auto pair : mp)
    {
        if (k <= 0)
        {
            cout << pair.first;
            break;
        }
        k -= pair.second;
    }
    return 0;
}