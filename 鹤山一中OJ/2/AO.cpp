#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() 
{
    int n;
    while (cin >> n) 
    {
        vector<vector<int>> mp(n, vector<int>(n));
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < n; j++) 
                cin >> mp[i][j];
        int m = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (mp[i][j] == 1) 
                    m++;

        if (m < 0.1*n*n) cout << "Sparse Graph";
        else cout << "Dense Graph";
        cout << endl;
    }
    return 0;
}