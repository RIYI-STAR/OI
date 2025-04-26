#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    while (cin >> n)
    {
        getchar();
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = (s[i] - 'a' - n + 26) % 26 + 'a';
        }
        cout << s << endl;
    }
    return 0;
}