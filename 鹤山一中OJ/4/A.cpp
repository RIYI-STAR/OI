#include <iostream>
#include <map>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        map<char, int> temp;
        map<char, int> a_mp, b_mp;
        for (char c : a)
        {
            a_mp[c] = 1;
            temp[c] = 1;
        }
        for (char c : b)
        {
            b_mp[c] = 1;
            temp[c] = 1;
        }
        for (auto it : temp)
            cout << it.first;
        cout << endl;
        for (auto it : a_mp)
            if (b_mp[it.first] != 1)
                cout << it.first;
        cout << endl;
    }
    return 0;
}