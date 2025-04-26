#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        map<char, int> mp;
        for (char c : s)
        
            if (c >= 'a' && c <= 'z')
                mp[c]++;
        
        for (auto it : mp)
        {
            cout << it.first << ":" << it.second << endl;
        }
    }
    return 0;
}