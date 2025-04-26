#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapify(vector<int> &heap, int n, int i)
{
    int left_i = 2 * i + 1;
    int right_i = 2 * i + 2;
    int target_i = i;
    if (left_i < n && heap[left_i] > heap[i])
        target_i = left_i;
    if (right_i < n && heap[right_i] > heap[target_i])
        target_i = right_i;
    if (target_i != i)
    {
        swap(heap[i], heap[target_i]);
        heapify(heap, n, target_i);
    }
}

int main()
{
    int n, i;
    while (cin >> n >> i)
    {
        vector<int> heap(n, 0);
        for (int j = 0; j < n; j++)
            cin >> heap[j];
        heapify(heap, n, i);
        for (int j = 0; j < n; j++)
            cout << heap[j] << " ";
        cout << endl;
    }
    return 0;
}