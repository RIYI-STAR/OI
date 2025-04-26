#include <vector>
#include <iostream>
using namespace std;

void heapify(vector<int> &heap, int n, int i)
{
    int left_i = 2 * i + 1;
    int right_i = 2 * i + 2;
    int target_i = i;
    if (left_i < n && heap[left_i] > heap[target_i])
        target_i = left_i;
    if (right_i < n && heap[right_i] > heap[target_i])
        target_i = right_i;
    if (target_i!= i)
    {
        swap(heap[i], heap[target_i]);
        heapify(heap, n, target_i);
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> heap(n);
        for (int i = 0; i < n; i++)
            cin >> heap[i];

        for (int i = n - 1; i >= 0; i--)
            heapify(heap, n, i);
            
        for (int i = 0; i < n; i++)
        {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
}