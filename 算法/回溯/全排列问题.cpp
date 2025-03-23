#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
vector<int> b(10086, 0);

vector<int> sum;

void x(int i)
{
    int n = a.size();
    for (int j = 0; j < n; j++)
    {
        if (b[a[j]] == 0)
        {
            sum.push_back(a[j]);
            b[a[j]]++;
            if (i == n - 1)
            {
                for (int k = 0; k < n; k++)
                {
                    printf("%5d", sum[k]);
                }
                cout << endl;
            }
            else
                x(i + 1);
            sum.pop_back();
            b[a[j]]--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        a.push_back(i);
    x(0);
    return 0;
}