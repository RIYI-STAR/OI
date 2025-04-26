#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int MAXN = 1e9 + 7;

long long hh(string s)
{
    long long res = 0;
    for (int i = 0; i < s.length(); i++)
        res = (res * 19260817 + s[i]) % MAXN;
    return res;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (s == "")
        {
            cout << 0 << endl;
            continue;
        }

        unordered_map<long long int, int> h;
        int res = 0;
        for (int i = 0; i < s.length(); i++)
            for (int j = i; j < s.length(); j++)
            {
                string temp = s.substr(i, j - i + 1);
                long long hash = hh(temp);
                if (h[hash] == 0)
                {
                    res++;
                    h[hash] = 1;
                }
            }
        cout << res << endl;
    }
    return 0;
}