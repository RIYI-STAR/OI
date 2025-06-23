#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    double n, m;
    while (cin >> n >> m)
    {
        if (n == 0)
            cout << 0 << endl;
        else {
            int maxn = 0;
            for (int i = 0;i<n;i++)
            {
                int temp;
                cin >> temp;
                maxn = max(maxn ,temp);
            }
            cout << ceil(m / maxn) << endl;
        }
        
    }
    return 0;
}