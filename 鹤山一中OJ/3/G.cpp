#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> res;
        int p = 1;
        while (n > 0)
        {
            if(n&1) res.push_back(p);
            p*=2;
            n>>=1;
        }
        for (int i = 0; i < res.size() - 1; i++)
            cout << res[i] << ",";
        cout << res[res.size() - 1] << endl;
    }
    return 0;
}