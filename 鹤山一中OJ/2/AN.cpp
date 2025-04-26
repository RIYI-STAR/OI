#include <iostream>
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

        bool flag = true;
        
        for (int i = 1; i < n; i++)
            for (int j = 0; j <= i; j++)
                if (mp[i][j] != mp[j][i])
                    flag = false;
        if (flag) cout << "Undirected Graph";
        else cout << "Directed Graph";
        cout << endl;
    }
    return 0;
}