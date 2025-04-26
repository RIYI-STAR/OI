#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        vector<int> v(26, 0);
        for (char c : s)
        {
            if (!v[c - 'a'])
            {
                cout << c;
                v[c - 'a'] = 1;
            }
        }
        cout << endl;
    }
    return 0;
}