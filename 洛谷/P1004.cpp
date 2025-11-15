#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int i, j;
};

int sum(vector<vector<int>> data, vector<vector<Node>> &mp, int N)
{
    vector<vector<int>> dp(N+1, vector<int>(N+1, 0));
    dp[1][1] = data[1][1];
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
        {
            if(dp[i - 1][j] <= dp[i][j - 1])
            {
                dp[i][j] = dp[i][j - 1] + data[i][j];
                Node n = Node();
                n.i = i;
                n.j = j - 1;
                mp[i][j] = n;
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + data[i][j];
                Node n = Node();
                n.i = i - 1;
                n.j = j;
                mp[i][j] = n;
            }
        }
        
    return dp[N][N];
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> data(N+1, vector<int>(N+1, 0));
    int t_i, t_j, num;
    while (cin >> t_i >> t_j >> num)
    {
        if (t_i == 0 && t_j == 0 && num == 0)
            break;
        data[t_i][t_j] = num;
    }
    vector<vector<Node>> mp(N+1, vector<Node>(N+1, {0, 0}));
    int a = sum(data, mp, N);

    cout << "print data:" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    
    Node tmp = mp[N][N];
    while(tmp.i != 0 || tmp.j != 0)
    {
        data[tmp.i][tmp.j] = 0;
        tmp = mp[tmp.i][tmp.j];
    }

    cout << "a: "  << a << endl;

    cout << "print data:" << endl;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

    cout << a + sum(data, mp, N) << endl;
    return 0;
}