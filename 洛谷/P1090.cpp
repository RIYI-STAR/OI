// P1090 [NOIP 2004 提高组] 合并果子
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(-x);
    }
    int ans = 0;
    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        int sum = x + y;
        pq.push(sum);
        ans += sum;
    }
    cout << -ans << endl;
    return 0;
}