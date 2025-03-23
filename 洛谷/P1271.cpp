// P1271 【深基9.例1】选举学生会

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(10086, 0);
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < 10086; i++) {
        for (int j = 0; j < a[i]; j++) 
            cout << i << " ";
    }
    return 0;
}