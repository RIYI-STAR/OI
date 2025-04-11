#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
    public:
        static int hash(string s)
        {
            int res = 0;
            for (char c : s)
                res += c - 'a' + 1;
            return res;
        }

        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<int, vector<string>> mp;
            for (string& s : strs){
                int ss = hash(s);
                mp[ss].push_back(s);
            }
            vector<vector<string>> r;
            for (auto& p : mp)
                r.push_back(p.second);
            return r;
        }
    };

// int main() {
//     Solution s;
//     vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
//     vector<vector<string>> res = s.groupAnagrams(strs);
//     for (auto& v : res) {
//         for (auto& s : v)
//             cout << s << " ";
//         cout << endl;
//     }
//     return 0;
// }