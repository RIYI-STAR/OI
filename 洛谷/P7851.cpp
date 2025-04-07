// P7851 「JZOI-2」信号塔
#include <iostream>
#include <cmath>
using namespace std;

int n, k;

int getDistance(int x)
{
    return floor((x - 1) / k);
}

int main()
{
    cin >> n >> k;
    
    int signal[999999];
    signal[0] = 100000086;
    for (int i = 1; i <= n; i++)
    {
        int p = i - 1;
        while (p >= 0)
        {
            int s = signal[p];
            int d = abs(i - p);
            if (getDistance(s) >= d)
            {
                signal[i] = abs(i - p);
                break;
            }
            p--;
        }
    }
    cout << signal[n] << endl;
}