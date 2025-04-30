#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
            cin >> temp[i];
        sort(temp.begin(), temp.end());
        cout << temp[n/2] << endl;
    }
    return 0;
}