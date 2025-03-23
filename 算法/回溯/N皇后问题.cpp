#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> col(10086, 0);
vector<int> dia1(10086, 0);
vector<int> dia2(10086, 0);
int ans = 0;

void demo(int x)
{
    for (int i = 1; i <= n; i++)
    {
        if (col[i] == 0 && dia1[x + i] == 0 && dia2[i - x + n] == 0)
        {
            col[i] = 1;
            dia1[i + x] = 1;
            dia2[i - x + n] = 1;
            if (x == n)
            {
                ans++;
            }
            else
                demo(x + 1);
            col[i] = 0;
            dia1[i + x] = 0;
            dia2[i - x + n] = 0;
        }
    }
}

int main()
{
    while (cin >> n)
    {
        ans = 0;
        demo(1);
        cout << ans << endl;
    }
    return 0;
}
