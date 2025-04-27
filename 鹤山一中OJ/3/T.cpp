#include <iostream>
using namespace std;

int main()
{
    string s;
    int k;
    while (cin >> s >> k)
    {
        for (int i = k; i < s.size(); i++)
            cout << s[i];
        cout << endl;
    }

    return 0;
}