#include <iostream>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
            else if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
        }
        cout << s << endl;
    }
}