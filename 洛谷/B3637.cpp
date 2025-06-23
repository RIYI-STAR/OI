#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> dp(n, 0);
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < i; j++)
        
            if (a[i] > a[j])
                temp = max(temp, dp[j]);
        
        dp[i] = temp + 1;
    }

    // for (int i = 0; i < n; i++)
    //     cout << dp[i] << " ";
    // cout << endl;

    int res = 0;
    for (int i = 0; i < n; i++)
        res = max(res, dp[i]);

    cout << res << endl;

    return 0;
}