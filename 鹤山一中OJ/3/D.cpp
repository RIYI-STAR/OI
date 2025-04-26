#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100000;

vector<int> get_list()
{
    vector<int> list = {2, 3, 5, 7, 11};
    for (int i = 13; i < MAXN; i += 2)
    {
        bool flag = true;
        for (int j = 0; list[j] * list[j] <= i; j++)
            if (i % list[j] == 0)
            {
                flag = false;
                break;
            }
        if (flag)
            list.push_back(i);
    }
    return list;
}

int main()
{
    vector<int> list = get_list();
    int n;
    while (cin >> n)
    {
        if (n == 0 || n == 1)
            cout << n << "=" << n << endl;
        else
        {
            int temp = n;
            vector<int> res;
            for (int i = 0; i < list.size(); i++)
            {
                while (n % list[i] == 0)
                {
                    res.push_back(list[i]);
                    n /= list[i];
                }
                if (n == 1)
                    break;
            }
            cout << temp << "=";
            for (int i = 0; i < res.size() - 1; i++)
                cout << res[i] << "*";
            cout << res[res.size() - 1] << endl;
        }
    }
    return 0;
}