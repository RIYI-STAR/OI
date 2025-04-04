// P11231 [CSP-S 2024] 决斗
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) cin >> cards[i];
    sort(cards.begin(), cards.end());
    int left = 0, right = 0;
    while (right < n){
        if (cards[right] > cards[left]) left++;
        right++;
    }
    cout << right - left << endl;
    return 0;
}