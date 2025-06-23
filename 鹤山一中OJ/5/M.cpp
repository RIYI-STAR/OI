#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> dp(n);
        dp[0] = arr[0];
        for (int i = 1;i < n ;i++)
            dp[i] = max(arr[i], dp[i - 1] + arr[i]);
        cout << dp[n - 1] << endl;
    }
    return 0;
}