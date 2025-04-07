// P5514 [MtOI2019] 永夜的报应
#include <iostream>
using namespace std;

int main()
{
    int n, ans;
    cin >> n;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ans ^= x;
    }
    cout << ans << endl;
    return 0;
}