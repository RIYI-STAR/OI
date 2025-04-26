#include <iostream>
#include <vector>
using namespace std;

bool isLeap(int y)
{
    return (y % 4 && y % 100 != 0) || (y % 400);
}

int main()
{
    vector<string> week_mp = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    vector<int> month_mp = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    int res;
    while (scanf("%d %d %d", &y, &m, &d) != EOF)
    {
        int dt = 0;
        if (y > 2017)
        {
            dt += (31 + 30 + 31);
            int dy = y - 2017 - 1;
            dt += dy * 365;
            for (int i = 2017; i < y; i++)
                if (isLeap(i))
                    dt++;
            for (int i = 1; i < m; i++)
            {
                dt += month_mp[i];
                if (i == 2 && isLeap(y))
                    dt++;
            }
            dt += d;
            res = dt % 7;
        }
        else if (y < 2017)
        {
            dt += (31 + 28 + 31 + 30 + 31 + 31 + 30 + 31 + 30);

            int dy = 2017 - y - 1;
            dt += dy * 365;

            for (int i = y + 1; i < 2017; i++)
                if (isLeap(i))
                    dt++;

            for (int i = m + 1; i <= 12; i++)
            {
                dt += month_mp[i];
                if (i == 2 && isLeap(y))
                    dt++;
            }

            dt += (month_mp[m] - d);
            res = (7 - (dt % 7)) % 7;
        }
        else
        {
            if (m > 10)
            {
                for (int i = 10; i < m; i++)
                    dt += month_mp[i];
                dt += d - 1;
                res = dt % 7;
            }
            else if (m < 10)
            {
                for (int i = m + 1; i < 10; i++)
                {
                    dt += month_mp[i];
                    if (i == 2 && isLeap(y))
                        dt++;
                }
                dt += month_mp[m] - d + 1;
                res = (7 - (dt % 7)) % 7;
            }
            else
            {
                if (d > 1)
                    res = (d - 1) % 7;
                else
                    res = 0;
            }
        }

        cout << week_mp[res] << endl;
    }
    return 0;
}