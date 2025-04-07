// P6724 [COCI 2015/2016 #5] MULTIGRAM
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

string getMinWord(string s, int k)
{
    int n = s.length();
    if ((n % k) != 0)
        return "-1";
    string res = "-1";
    map<string, int> dp;
    for (int i = 0; i < n; i += k)
    {
        string word = s.substr(i, k);
        dp[word]++;
        if (dp[word] == n / k)
        {
            res = word;
            break;
        }
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    string res = "00000000000";
    for (int i = 1; i <= s.length() / 2; i++)
    {
        string word = getMinWord(s, i);
        if (word == "-1")
            continue;
        else if (word.length() < res.length())
        {
            res = word;
            break;
        }
    }
    if (res == "00000000000") cout << "-1" << endl;
    else cout << res << endl;

    return 0;
}