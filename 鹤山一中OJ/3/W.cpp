#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (s == "")
        {
            cout << 0 << endl;
            continue;
        }

        unordered_map<string, int> h;
        int res = 0;
        for (int i = 0; i < s.length(); i++)
            for (int j = i; j < s.length(); j++)
            {
                res++;
            }
        cout << res << endl;
    }
    return 0;
}