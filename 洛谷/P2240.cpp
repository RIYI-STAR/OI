// P2240 【深基12.例1】部分背包问题
#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
    double weight;
    double value;
    double p;
};

bool cmp(Item a, Item b)
{
    return a.p > b.p;
}

int main()
{
    int N, T;
    cin >> N >> T;
    Item items[N];
    for (int i = 0; i < N; i++)
    {
        cin >> items[i].weight >> items[i].value;
        items[i].p = items[i].value / items[i].weight;
    }
    sort(items, items + N, cmp);

    double ans = 0;
    for (int i = 0; i < N; i++)
    {
        int w = items[i].weight;
        
        if ( T <= 0 ) break;  

        if (w <= T)
        {
            T -= w;
            ans += items[i].value;
        }
        else
        {
            ans += T * items[i].p;
            T = 0;
        }
    }
    printf("%.2lf\n", ans);
    return 0;
}