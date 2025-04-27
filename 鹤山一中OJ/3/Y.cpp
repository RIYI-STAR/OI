#include <iostream>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        for (char c : s)
        {
            if (c == '@') break;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}