#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int res = pow(5, floor(n / 2));
        if (n % 2)
            res *= 3;
        cout << res << endl;
    }
    return 0;
}