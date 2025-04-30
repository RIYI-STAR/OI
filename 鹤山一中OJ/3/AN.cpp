#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 65535;

vector<int> get_list()
{
    vector<int> res(MAXN + 1, 0);
    res[2] = 1;
    for (int i = 3; i <= MAXN; i += 2)
    {
        bool flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            res[i] = 1;
    }
    return res;
}

int main()
{
    vector<int> list = get_list();
    int n;
    while (cin >> n)
    {
        vector<int> res;
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                if (list[i] == 1)
                {
                    // cout << n << " " << i << ' ' << n % i << endl;

                    res.push_back(i);
                    n /= i;

                    // cout << "test" << endl;
                }
            }
        }
        cout << "{";
        for (int i = 0; i < res.size() -1; i++)
        {
            cout << res[i] << ",";
        }
        cout << res[res.size() - 1] << "}" << endl;

    }
    return 0;
}