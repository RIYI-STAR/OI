#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int len = s.length();
        int left = 0;
        int right = len -1 1;
        int n;
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            string command;
            getline(cin, command);
            if (command == "POP") left++;
            if (command.substr(0, 4) == "PUSH") right++;
        }
        int res = right - left + 1;
        if (res < 0) cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}