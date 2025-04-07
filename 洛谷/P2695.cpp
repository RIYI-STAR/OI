// P2695 骑士的工作
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// void heaping(vector<int> &heap, int index)
// {
//     if (index * 2 > heap.size() || heap[index] <= heap[index * 2] || heap[index] <= heap[index * 2 + 1])
//         return;
//     int minLeaveIndex = (heap[index * 2] < heap[index * 2 + 1]) ? index * 2 : index * 2 + 1;
//     swap(heap[index], heap[minLeaveIndex]);
//     heaping(heap, minLeaveIndex);
// }

// void heapPop(vector<int> &heap, int index)
// {
//     swap(heap[index], heap[heap.size() - 1]);
//     heap.pop_back();
//     heaping(heap, index);
// }

int AICost(int n, int m, vector<int> &a, vector<int> &b) {
    if (m < n) {
        cout << "you died!" << endl;
        return 0;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int ans = 0, k = 0;
    for (int i = 0; i < n; i++) {
        while (k < m && b[k] < a[i]) k++;
        if (k >= m) {
            cout << "you died!" << endl;
            return 0;
        }
        ans += b[k++];
    }
    cout << ans << endl;
    return ans;
}


int minCost(int n, int m, vector<int> &a, vector<int> &b)
{
    if (n > m)
    {
        cout << "you died!" << endl;
        return 0;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    int p = 0;
    for (int i = 0; i < n; i++)
        for (int j = p; j < m; j++)
        {
            if (n > m - p)
            {
                cout << "you died!" << endl;
                return 0;
            }
            int temp = b[j];
            p++;
            if (temp >= a[i])
            {
                ans += temp;
                break;
            }
        }

    cout << ans << endl;
    return ans;
}

void randTest()
{
    int n = rand() % 10;
    int m = rand() % 20000;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100000;
    for (int i = 0; i < m; i++)
        b[i] = rand() % 100000;

    int aa = minCost(n, m, a, b);
    int bb = AICost(n, m, a, b);
    if (aa!= bb)
        cout << "error!" << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    minCost(n, m, a, b);
    // for (int i = 0; i < 400; i++)
    //     randTest();
    return 0;
}