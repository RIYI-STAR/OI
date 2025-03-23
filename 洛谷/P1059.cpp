// P1059 [NOIP 2006 普及组] 明明的随机数
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(10086, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x] = 1;
    }
    int ans = 0;
    for (int i = 1; i < 10086; i++) 
        if (a[i]) 
            ans++;
    cout << ans << endl;
    for (int i = 1; i < 10086; i++) 
        if (a[i]) 
            cout << i << " ";
    return 0;
}