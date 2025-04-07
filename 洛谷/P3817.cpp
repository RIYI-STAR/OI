// P3817 小A的糖果
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);

    if (n == 1) {
        int a;
        cin >> a;
        cout << ((a - x) >= 0?(a - x):0) << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
        cin >> c[i];

    long long int res = 0;
    
    for (int i = 1; i < n; i++)
    {
        int temp = c[i] + c[i - 1];
        if (temp > x)
        {
            int sum = temp - x;
            if (sum > c[i])
            {
                c[i] = 0;
                c[i - 1] -= sum - c[i];
            }
            else c[i] -= sum;
            res += sum;
        }
    }

    cout << res << endl;

    return 0;
}