#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

const int N = 128;

vector<int> to_vector(string s)
{
    vector<int> res(N, 0);
    for (int i = s.size() - 1; i >= 0; i--)

        res[N - (s.size() - i)] = s[i] - '0';

    return res;
}

vector<int> multiply(vector<int> a, vector<int> b)
{
    vector<int> res(2*N, 0);

    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j >= 0; j--) {
            res[i + j + 1] += a[i] * b[j];
            if (res[i + j + 1] >= 10) {
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
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
        // for (int i = 0; i < N; i++)
        //     cout << va[i] << " ";
        //     cout << endl;
        // for (int i = 0; i < N; i++)
        //     cout << vb[i] << " ";
        //     cout << endl;
        vector<int> res = multiply(va, vb);
        int i = 0;
        for (i; i < res.size(); i++)

            if (res[i] != 0)
                break;

        for (i; i < res.size() - 1; i++)

            cout << res[i];

        cout << res[res.size() - 1] << endl;
    }

    return 0;
}