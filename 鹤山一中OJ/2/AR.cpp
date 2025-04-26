#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<double> x(n), y(n);
        for (int i = 0; i < n; i++)
            cin >> x[i] >> y[i];
        double ans = 0;
        for (int i = 0; i < n - 1; i++)
            ans += x[i] * y[i + 1] - x[i + 1] * y[i];
        ans += x[n - 1] * y[0] - x[0] * y[n - 1];
        double res = abs(ans) / 2;
    
        printf("%.2lf\n", res);

    }
    return 0;
}