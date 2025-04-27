#include <iostream>
#include <vector>
using namespace std;

bool isPerfect(int y, int m, int d)
{
    bool flag = true;
    int res = 0;
    while (y > 0)
    {
        res += y % 10;
        if (y % 10 == 4)
        {
            flag = false;
            break;
        }
        y /= 10;
    }
    while (m > 0)
    {
        res += m % 10;
        if (m % 10 == 4)
        {
            flag = false;
            break;
        }
        m /= 10;
    }
    while (d > 0)
    {
        res += d % 10;
        if (d % 10 == 4)
        {
            flag = false;
            break;
        }
        d /= 10;
    }
    return flag && (res % 8 == 0);
}

bool isLeap(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

void printDate(int y, int m, int d)
{
    cout << y << "-";
    if (m < 10)
        cout << "0";
    cout << m << "-";
    if (d < 10)
        cout << "0";
    cout << d << endl;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> months = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int y = 2020, m = 1, d = 1;
        while (n > 0)
        {
            for (m = 1; m <= 12; m++)
            {
                if (m == 2 && isLeap(y))
                    months[2] = 29;
                else
                    months[2] = 28;
                for (d = 1; d <= months[m]; d++)
                {
                    if (isPerfect(y, m, d))
                    {
                        n--;
                        if (n == 0)
                            break;
                    }
                }
                if (n == 0)
                    break;
            }
            if (n == 0)
                break;
            y++;
        }
        printDate(y, m, d);
        
    }
    return 0;
}