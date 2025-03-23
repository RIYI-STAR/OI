#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[100] = {4, 2, 1, 5, 3, 8, 6, 7, 9, 0, 14, 11, 13, 12, 15, 10, 87, 23, 18, 16, 17, 19, 20, 21, 22, 28, 47, 32, 29, 30, 31, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 60, 402, 403, 305, 306, 123, 43, 44, 45, 46, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 111, 42, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94};
    vector<int> bs[5];
    for (int i = 0; i < 100; i++) {
        int n = arr[i];
        if (n < 20) bs[0].push_back(n);
        else if (n < 40 && n >= 20) bs[1].push_back(n);
        else if (n < 80 && n >= 40) bs[2].push_back(n);
        else if (n < 200 && n >= 80) bs[3].push_back(n);
        else bs[4].push_back(n);
    }
    
    for (int i = 0; i < 5; i++) {
        sort(bs[i].begin(), bs[i].end());
        for (auto j : bs[i])
            cout << j << " ";
    }
        

    return 0;
}