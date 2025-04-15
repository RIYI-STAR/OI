#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

const int N = 100;

vector<int> to_vector(string s)
{
    vector<int> res(N, 0);
    for (int i = s.size() - 1; i >= 0; i--)

        res[N - (s.size() - i)] = s[i] - '0';

    return res;
}

vector<int> add(vector<int> &a, vector<int> &b)
{
    vector<int> res(N + 1, 0);
    int n = max(a.size(), b.size());
    for (int i = 1; i <= n; i++)
    {
        // cout << a[i] << "+" << b[i] << endl;
        res[N - i] += a[N - i] + b[N - i];
        if (res[N - i] >= 10)
        {
            res[N - i - 1]++;
            res[N - i] %= 10;
        }
    }

    return res;
}

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        vector<int> va = to_vector(a);
        vector<int> vb = to_vector(b);
        vector<int> res = add(va, vb);
        int i = 0;
        for (i; i < N; i++)

            if (res[i] != 0)
                break;

        for (i; i < N - 1; i++)

            cout << res[i];

        cout << res[N - 1] << endl;
    }

    return 0;
}