#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        unordered_map<char, int> dots;
        vector<char> ds(n);
        for (int i = 0; i < n; i++)
        {
            char temp;
            cin >> temp;
            dots[temp] = i;
            ds[i] = temp;
        }

        vector<vector<int>> map(n, vector<int>(n, 0));

        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            char a, b;
            cin >> a >> b;
            map[dots[a]][dots[b]] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ds[i] << ":";
            vector<char> temp;
            for (int j = 0; j < n; j++)
                if (map[i][j] == 1)
                    temp.push_back(ds[j]);
            sort(temp.begin(), temp.end());
            for(char c : temp)
                cout << ' ' << ds[i] << "->" << c;
            cout << endl;
        }
    }
    return 0;
}