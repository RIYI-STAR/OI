// P1056 [NOIP 2008 普及组] 排座椅
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Line
{
    int value;
    int work;
};

bool cmp(Line a, Line b)
{
    if(a.work == b.work)
        return a.value < b.value;
    return a.work > b.work;
}

int main()
{
    int M, N, K, L, D;
    cin >> M >> N >> K >> L >> D;
    
    vector<int> row_count(M+1, 0); // 统计每行的分隔线能隔开多少对
    vector<int> col_count(N+1, 0); // 统计每列的分隔线能隔开多少对
    
    for (int i = 0; i < D; i++)
    {
        int x, y, p, q;
        cin >> x >> y >> p >> q;
        
        if (x == p) // 同一列，需要水平分隔线
        {
            int col = min(y, q);
            col_count[col]++;
        }
        else if (y == q) // 同一行，需要垂直分隔线
        {
            int row = min(x, p);
            row_count[row]++;
        }
    }

    vector<Line> r, c;

    // 处理行分隔线
    for (int i = 1; i <= M; i++)
    {
        if(row_count[i] > 0)
            r.push_back({i, row_count[i]});
    }

    // 处理列分隔线
    for (int i = 1; i <= N; i++)
    {
        if(col_count[i] > 0)
            c.push_back({i, col_count[i]});
    }

    // 按分隔效果排序，效果相同的按行号/列号排序
    sort(r.begin(), r.end(), cmp);
    sort(c.begin(), c.end(), cmp);

    // 输出前K个行分隔线
    vector<int> rows;
    for (int i = 0; i < min(K, (int)r.size()); i++)
        rows.push_back(r[i].value);
    sort(rows.begin(), rows.end());
    for (int i = 0; i < rows.size(); i++)
    {
        if(i != 0) cout << " ";
        cout << rows[i];
    }
    cout << endl;

    // 输出前L个列分隔线
    vector<int> cols;
    for (int i = 0; i < min(L, (int)c.size()); i++)
        cols.push_back(c[i].value);
    sort(cols.begin(), cols.end());
    for (int i = 0; i < cols.size(); i++)
    {
        if(i != 0) cout << " ";
        cout << cols[i];
    }
    cout << endl;

    return 0;
}
