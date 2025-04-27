#include <iostream>
using namespace std;

int main()
{
    string n;
    while (cin >> n)
    {
        int res = 0;
        for(int i = 0 ; i < n.size() ; i++)
            res = res * 2 + n[i] - '0';
        cout << res << endl;
    }
    return 0;
}