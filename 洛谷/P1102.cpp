// P1102 A-B 数对
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

const int M = 12;

// vector<int> add(vector<int> a, vector<int> b)
// {
//     vector<int> res(M);
//     int temp = 0;
//     for (int i = M - 1; i >= 0; i--)
//     {
//         res[i] = a[i] + b[i] + temp;
//         if (res[i] >= 10)
//         {
//             temp = res[i] / 10;
//             res[i] %= 10;
//         }
//         else
//             temp = 0;
//     }
//     return res;
// }

// vector<int> string_to_num(string n)
// {
//     int l = n.length();
//     vector<int> res(M, 0);
//     for (int i = l - 1; i >= 0; i--)
//         res[M - l + i] = n[i] - '0';

//     return res;
// }

typedef long long LL;

// int mm()
// {
//     int N, C;
//     cin >> N >> C;
//     vector<LL> nums(N + 1);
//     for (int i = 1; i <= N; i++)
//         cin >> nums[i];
//     sort(nums.begin() + 1, nums.end());

//     vector<LL> dp(10000000);
//     for (int i = 1; i <= N; i++)
//         dp[nums[i]]++;

//     int ans = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         int left = 1;
//         int right = N;
//         int mid;
//         LL A = nums[i] + C;
//         while (left <= right)
//         {
//             mid = (left + right) / 2;
//             if (nums[mid] > A)
//                 right = mid - 1;
//             else if (nums[mid] < A)
//                 left = mid + 1;
//             else
//             {
//                 ans += dp[nums[mid]];
//                 break;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// int mmm()
// {
//     int N;
//     string C;
//     cin >> N >> C;
//     vector<vector<int>> nums(N + 1);
//     for (int i = 1; i <= N; i++)
//     {
//         string x;
//         cin >> x;
//         nums[i] = string_to_num(x);
//     }
//     sort(nums.begin() + 1, nums.end());

//     int ans = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         int left = 1;
//         int right = N;
//         int mid;
//         vector<int> A = add(nums[i], string_to_num(C));
//         while (left <= right)
//         {
//             mid = (left + right) / 2;
//             if (nums[mid] > A)
//                 right = mid - 1;
//             else if (nums[mid] < A)
//                 left = mid + 1;
//             else
//             {
//                 ans++;
//                 int t = mid - 1;
//                 while (nums[t] == A && t >= left)
//                 {
//                     t--;
//                     ans++;
//                 }
//                 t = mid + 1;
//                 while (nums[t] == A && t <= right)
//                 {
//                     t++;
//                     ans++;
//                 }
//                 break;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

int m()
{
    // 双指针法
    int N, C;
    cin >> N >> C;
    vector<LL> nums(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    unordered_map<LL, int> dp;
    for (int i = 1; i <= N; i++)
        dp[nums[i]]++;

    int left = 1, right = 1;
    LL ans = 0;
    while (left <= N)
    {
        LL A = nums[left] + C;
        while (nums[right] <= A && right <= N)
        {
            // cout << "ans:" << ans << " left:" << left << " right:" << right << " A:" << A << "  nums[right]:" << nums[right] << endl;

            if (nums[right] == A)
            {
                ans += dp[nums[right]];
                break;
            }
            else right++;
        }
        left++;
    }
    cout << ans << endl;
    return 0;
}

int main()
{
    m();
    return 0;
}