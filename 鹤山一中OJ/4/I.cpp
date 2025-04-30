#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        s[0] = s[0] - 'a' + 'A';
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == ' ' && i + 1 < s.size()) s[i+1] = s[i+1] - 'a' + 'A';
        }
        cout << s << endl;
    }
    return 0;
}