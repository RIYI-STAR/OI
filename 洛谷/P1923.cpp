// P1923 【深基9.例4】求第 k 小的数

#include <iostream>
using namespace std;

void quickSort(int* a, int left, int right) {
    if (left >= right) return;
    int firstMin = left+1;
    int firstMax = right;
    while(firstMin < firstMax) {
        while(a[firstMax] <= a[left]) 
            firstMax--;
        while(a[firstMin] >= a[left]) 
            firstMin++;
        swap(a[firstMax], a[firstMin]);
    }
    swap(a[left], a[firstMax]);
    quickSort(a, left, firstMax-1);
    quickSort(a, firstMax+1, right);
}

int main() { 
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    quickSort(a, 0, n-1);
    cout << a[n-1-k] << endl;
    return 0;
}