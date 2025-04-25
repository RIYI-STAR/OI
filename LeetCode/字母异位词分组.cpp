#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:

    static int hash(string s)
    {
        long long int res = 0;
        for (char c : s)
            res = (res * 31 + c) % 1000007;
        return res;
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> res(1000007);
        for (string &s : strs)
        {
            string ss = s;
            sort(ss.begin(), ss.end());
            int h = hash(ss);
            res[h].push_back(s);
        }
        vector<vector<string>> r;
        for (auto &v : res)
            if (!v.empty())
                r.push_back(v);
        return r;
    }
};

int main()
{
    Solution s;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat", "ab", "c"};
    vector<vector<string>> res = s.groupAnagrams(strs);
    for (auto &v : res)
    {
        for (auto &s : v)
            cout << s << " ";
        cout << endl;
    }
    return 0;
}