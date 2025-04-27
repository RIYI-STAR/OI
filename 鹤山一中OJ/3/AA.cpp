#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            cout << "0" << endl;
            continue;
        }
        string res = "";
        while (n>0)
        {
            res.insert(0, 1, ((n&1) + '0'));
            n >>= 1;
        }
        cout << res << endl;
    }
    return 0;
}