// P5639 【CSGRound2】守序者的尊严
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    int last = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x != last)
        {
            last = x;
            ans++;
        }
    }
    cout << ans << endl;
}