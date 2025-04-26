#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char c;
    while (cin >> c)
    {
        vector<int> res(8, 0);
        for (int i = 7; i >= 0; i--)
        {
            if (c <= 0) break;
            res[i] = c&1;
            c >>= 1;
        }
        int temp = 0;
        for (int i = 0; i < 8; i++)
        {
            cout << res[i];
            if (temp % 4 == 3) cout << " ";
            temp++;
        }
        cout << endl;
    }
    return 0;
}