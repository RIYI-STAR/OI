// P1007 独木桥
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int L, N;
    cin >> L >> N;
    if (N == 0)
    {
        cout << 0 << ' ' << 0 << endl;
        return 0;
    }
    vector<int> arr(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int minLength = 0;
    
    for (int i = 1; i <= N; i++)
        minLength = max(min(arr[i], L + 1 - arr[i]), minLength);
    
    cout << minLength << ' ';
    cout << max(arr[N], L + 1 - arr[1]) << endl;
}