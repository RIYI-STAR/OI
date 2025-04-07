#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int n = 10;
struct Item {
    double w;
    double v;
    double p;         //平均
    Item (int w, int v) : w((double)w), v((double)v), p((double)v/w) {}
};

bool cmp (Item a, Item b) {
    return a.p < b.p;
}

int main()
{
    vector<Item> items(n, Item(0, 0));
    vector<int> w = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   //价值
    vector<int> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};   //体积
    int cpp = 15;       //背包容量(总体积)
    int res = 0;
    for (int i = 0; i < n; i++) 
        items[i] = Item(w[i], v[i]);
    sort(items.begin(), items.end(), cmp);
    for (int i = 0; i < n; i++) {
        int vv = items[i].v;
        if (cpp >= vv) res += items[i].w;
        else {
            res += items[i].p * cpp;
            break;
        }
        cpp -= vv;
    }
    cout << res << endl;
    return 0;
}