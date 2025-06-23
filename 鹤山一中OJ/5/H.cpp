#include <iostream>
#include <vector>
using namespace std;

void dfs(string s, int &pre)
{
    // cout << "pre: " << pre << " s[pre]: " << s[pre] << endl;
    if (pre >= s.size())
        return ;
    char currentWord = s[pre];
    pre++;
    dfs(s, pre);
    if(s[pre] != '^')cout << currentWord;
    pre++;
    dfs(s, pre);
}

int main()
{
    string s;
    while (cin >> s)
    {
        int pre = 0;
        dfs(s, pre);
        cout << endl;
    }
    return 0;
}
// ab^^^d^ecg^^^^^