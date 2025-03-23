// P1012 [NOIP 1998 提高组] 拼数

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(b) + to_string(a);
    return s1 > s2;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end(), compare);
    string result;
    for (int num : nums) {
        result += to_string(num);
    }
    cout << result << endl;
    return 0;
}
