#include <iostream>
using namespace std;

bool sum(int n, int k)
{
    bool res = false;
    while (n > 0)
    {
        int temp = n % 10;
        if (temp == k)
        {
            res = true;
            break;
        }
        n /= 10;
    }
    return res;
}

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int res = 0;
        for (int i = 1; i <= n; i++)
            if (sum(i, k)) res++;
        cout << res << endl;
    }
    return 0;
}