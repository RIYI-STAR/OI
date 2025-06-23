#include <iostream>
#include <vector>
using namespace std;

bool cmp(string a, string b)
{
    string c, d;
    if (a.size() < b.size())
    {
        c = a;
        d = b;
    }
    else
    {
        c = b;
        d = a;
    }
    int p = 0;
    for (int i = 0; i < d.size(); i++)
    {
        if (c.size() == p + 1)
            return true;
        if (c[p] == d[i])
            p++;
        else
            p = 0;
    }
    return false;
}

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        string c, d;
        if (a.size() < b.size())
        {
            c = a;
            d = b;
        }
        else
        {
            c = b;
            d = a;
        }
        bool flag = false;
    
        for (int i = 0; i < d.size(); i++)
        {
            if (cmp(c, d))
            {
                flag = true;
                break;
            }
            string temp = d.substr(1, d.size() - 1);
            temp.push_back(d[0]);
            // cout << d << ' ' << temp << endl;
            d = temp;
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}