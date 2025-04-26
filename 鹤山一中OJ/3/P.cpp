#include <iostream>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int ans = 0;
        for (char c : s)
            if (c == ' ')
                ans++;
        cout << ans << endl;
    }
    return 0;
}