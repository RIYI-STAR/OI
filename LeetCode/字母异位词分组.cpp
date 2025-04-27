#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    static const int NN = 10000007;

    struct Node
    {
        string s;
        unsigned long long int length;
        int hash;
    };

    static int hash(string s)
    {
        long long int res = 1;
        for (char c : s)

            if (c != ' ')
                res = res * c % NN;

        // cout << res << endl;
        return res;
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<Node>> mp(NN);
        for (string &s : strs)
        {
            int h = hash(s);
            Node ss = {s, s.length(), h};
            if (mp[h].empty())
                mp[h].push_back(ss);
            else if(mp[h][0].length == s.length())
                mp[h].push_back(ss);
            else for (int i = h + 1; i < NN; i*=2)
                if (mp[i].empty())
                {
                    mp[i].push_back(ss);
                    break;
                }
        }
        vector<vector<string>> r;
        for (auto &p : mp)
            if (!p.empty())
            {
                vector<string> v;
                for (auto &n : p)
                    v.push_back(n.s);
                r.push_back(v);
            }
        return r;
    }
};

int main()
{
    Solution s;
    vector<string> strs = {"aaaaaaaaaaabc","abcd"};
    vector<vector<string>> res = s.groupAnagrams(strs);
    for (auto &v : res)
    {
        for (auto &s : v)
            cout << s << " ";
        cout << endl;
    }
    return 0;
}