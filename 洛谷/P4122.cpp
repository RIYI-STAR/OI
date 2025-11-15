#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> map(2001, vector<int>(2001, 0));
    for(int i = 0;i<2;i++)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000;
        y1 += 1000;
        x2 += 1001;
        y2 += 1001;
        map[x1][y1]++;
        map[x1][y2]--;
        map[x2][y1]--;
        map[x2][y2]++;
    }
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    y1 += 1000;
    x2 += 1001;
    y2 += 1001;
    map[x1][y1]--;
    map[x1][y2]++;
    map[x2][y1]++;
    map[x2][y2]--;
    for (int i = 1;i<2001;i++)
        for (int j = 1;j<2001;j++)
        {
            map[i][j] = map[i][j] + map[i-1][j] + map[i][j-1] - map[i-1][j-1];
        }
    for (int i = 1000;i<1020;i++)
    {
        for (int j = 1000;j<1020;j++) cout << map[i][j] << "    ";
        cout << endl;
    }
    int cnt = 0;
    for (int i = 1;i<2001;i++)
    {
        for (int j = 1;j<2001;j++) if (map[i][j] == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}