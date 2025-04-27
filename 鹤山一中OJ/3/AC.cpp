#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> mp(10, -1);
    mp[0] = 0;
    mp[1] = 1;
    mp[8] = 8;
    mp[6] = 9;
    mp[9] = 6;
    string s;
    while (cin >> s)
    {
        bool flag = true;
        for (int i = 0; i < s.length(); i++)
        {
            int this_n = s[i] - '0';
            int o_n = s[s.length() - 1 - i] - '0';
            int r_n = mp[this_n];
            if (r_n != -1)
                if (r_n != o_n)
                    flag = false;
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}