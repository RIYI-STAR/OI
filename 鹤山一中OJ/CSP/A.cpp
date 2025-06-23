#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        bool flag = sqrt(n) * sqrt(n) == n;
        if (flag) cout << n << " is a square number" << endl;
        else cout << n << " is not a square number" << endl;
    }
    return 0;
}