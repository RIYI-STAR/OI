// P1331 海战

#include <iostream>
#include <vector>
using namespace std;

int ans = 0;
int dx[2] = {1, -1};

// void dfs(vector<vector<char>> &map, int x, int y)
// {
//     map[x][y] = '*';
//     for (int i = 0; i < 4; i++)
//     {
//         if (i < 2)
//             x += dx[i];
//         else
//             y += dx[i - 2];
//         if (x < 0 || x >= map.size() || y < 0 || y >= map[0].size())
//             continue;
//         if (map[x][y] == '#')
//         {
//             dfs(map, x, y);
//             return;
//         }
//         x -= dx[i];
//         y -= dx[i - 2];
//     }
//     ans++;
//     return;
// }

bool d(vector<vector<char>> &map, int x, int y)
{
    int c = 0;
    if (map[x][y] == '#')
        c++;
    if (map[x + 1][y] == '#')
        c++;
    if (map[x][y + 1] == '#')
        c++;
    if (map[x + 1][y + 1] == '#')
        c++;
    if (c == 3)
        return false;
    return true;
}

// int main() // 深搜法
// {
//     int R, C;
//     cin >> R >> C;
//     vector<vector<char>> map(R, vector<char>(C));
//     for (int i = 0; i < R; i++)
//         for (int j = 0; j < C; j++)
//             cin >> map[i][j];

//     int isLegal = 1;

//     for (int i = 0; i < R - 1; i++)
//         for (int j = 0; j < C - 1; j++)
//             if (not d(map, i, j))
//             {
//                 isLegal = 0;
//                 break;
//             }

//     if (isLegal)
//     {
//         for (int i = 0; i < R; i++)
//             for (int j = 0; j < C; j++)
//             {
//                 if (map[i][j] == '#')
//                     dfs(map, i, j);
//             }
//         printf("There are %d ships.\n", ans);
//     }
//     else
//         cout << "Bad placement." << endl;
//     return 0;
// }

int main()
{ // 悬线法
    int R, C;
    cin >> R >> C;
    vector<vector<char>> map(R, vector<char>(C));
    vector<vector<int>> ls(R, vector<int>(C, 0));
    vector<vector<int>> rs(R, vector<int>(C, 0));
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> map[i][j];

    int isLegal = 1;

    for (int i = 0; i < R - 1; i++)
        for (int j = 0; j < C - 1; j++)
            if (not d(map, i, j))
            {
                isLegal = 0;
                break;
            }

    if (not isLegal)
    { // 判断合法
        cout << "Bad placement." << endl;
        return 0;
    }

    for (int i = 0; i < R; i++) // 预处理
        for (int j = 0; j < C; j++)
            if (map[i][j] == '#')
            {
                if (map[i][j - 1] == '#')
                {
                    ls[i][j] = ls[i][j - 1];
                    rs[i][j] = rs[i][j - 1];
                }
                else
                {
                    ls[i][j] = j;
                    for (int k = j; k < C; k++)
                        if (map[i][k] == '#')
                            rs[i][j] = k;
                        else
                            break;
                }
            }

    for (int i = R - 1; i >= 0; i--)
        for (int j = C - 1; j >= 0; j--)
            if (map[i][j] == '#')
            {
                ans++;
                int l = ls[i][j], r = rs[i][j];
                for (int k = i; k >= 0; k--)
                {
                    if (map[k][l] == '#')
                        for (int m = l; m <= r; m++)
                            map[k][m] = '*';
                    else
                        break;
                }
                        }

    printf("There are %d ships.\n", ans);
}