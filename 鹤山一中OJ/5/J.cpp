#include <iostream>
#include <vector>
#include <unordered_map>
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
            map[dots[b]][dots[a]] = 1;
        }

        cout << "  ";
        for(int i=0;i<n;i++)
            cout << ds[i] << " ";
        cout << endl;
        for(int i=0;i<n;i++)
        {
            cout << ds[i] << " ";
            for(int j=0;j<n;j++)
                cout << map[i][j] << " ";
            cout << endl;
        }
        
    }
    return 0;
}