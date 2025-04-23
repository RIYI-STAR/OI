#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int maxn = 0, minn = 999999999;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            maxn = max(maxn, temp);
            minn = min(minn, temp);
        }
        cout << maxn - minn << endl;
    }
    return 0;
}