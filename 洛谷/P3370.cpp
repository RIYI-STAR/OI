// P3370 【模板】字符串哈希
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const int MOD = 307;

unsigned long long int stringHash(string s)
{
    unsigned long long int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int c = s[i];
        res = res * MOD + c + 1;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<unsigned long long int> hh;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        unsigned long long int hash1 = stringHash(str);
        hh.push_back(hash1);
    }
    sort (hh.begin(), hh.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (hh[i] != hh[i+1]) ans++;
    cout << ans << endl;
    return 0;
}