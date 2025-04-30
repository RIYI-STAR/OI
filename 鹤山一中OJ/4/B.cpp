#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string s;
    unordered_map<string, int> signs = {
        {"+", 1},
        {"-", 1},
        {"*", 1},
        {"/", 1},
        {"(", 1},
        {")", 1},
    };
    const string tt = "";
    while (cin >> s)
    {
        vector<string> n;
        string temp = "";
        for (char c : s)
        {
            if (signs.count(tt + c))
            {
                n.push_back(temp);
                n.push_back(tt + c);
                temp = "";
            }
            else
            {
                temp = temp + c;
                // cout << "test:" << c << "  " << temp << endl;
            }
            // cout << "test" << endl;
        }
        n.push_back(temp);
        for (string s : n)
            cout << s << endl;
    }
    return 0;
}