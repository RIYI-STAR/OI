#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    while (cin >> n >> m)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int left = 0, right = n - 1;
        int ans = -1;
        while (left < right)
        {
            // cout << left << " " << right << endl;
            int mid = (left + right) / 2;
            int temp = arr[mid];
            if (temp > m)
                right = mid - 1;
            else if (temp < m)
                left = mid + 1;
            else
            {
                ans = mid;
                break;
            }
        }
        cout << ans << endl;
    }
}