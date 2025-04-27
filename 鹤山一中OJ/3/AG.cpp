#include <iostream>
#include <cstring>
using namespace std;

int get_real(string s)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
        res = res * 2 + (s[i] - '0');
    return res;
}

int sum(string n)
{
    if (n[0] == '0')
        return get_real(n);
    else if (n[0] == '1')
    {
        for (int i = 0; i < n.size(); i++)
            n[i] = (n[i] == '1') ? '0' : '1';

        // cout << n << endl;
        n[n.size() - 1]++;
        for (int i = n.size() - 1; i > 0; i--)
        {
            // cout << n << endl;
            if (n[i] >= '2')
            {
                n[i] -= 2;
                n[i - 1]++;
            }
        }
        // cout << n << endl;

        return -get_real(n);
    }
    return 0;
}

int main()
{
    string n;
    while (cin >> n)
        cout << sum(n) << endl;
    return 0;
}