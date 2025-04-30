#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<string, int> call = {
    {"Mr", 1},
    {"Ms", 1},
    {"Mrs", 1},
    {"Miss", 1}};

int main()
{
    string s;
    while (getline(cin, s))
    {
        vector<string> words;
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == ' ' || c == ',' || c == '?' || c == '!')
            {
                if (call[temp] == 1)
                    temp = temp + ".";
                if (temp != "")
                {
                    words.push_back(temp);
                    temp = "";
                }
            }
            else if (c == '.' && (s[i - 1] >= 'a' && s[i - 1] <= 'z' || s[i - 1] >= 'A' && s[i - 1] <= 'Z') && (s[i + 1] >= 'a' && s[i + 1] <= 'z' || s[i + 1] >= 'A' && s[i + 1] <= 'Z'))
            {
                if (call[temp] == 1)
                    temp = temp + c;
                if (temp != "")
                {
                    words.push_back(temp);
                    temp = "";
                }
            }
            else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            {
                temp = temp + c;
            }
        }
        if (temp != "")
            words.push_back(temp);
        for (int i = 0; i < words.size(); i++)
            cout << words[i] << endl;
        // cout << words.size() << endl;
    }
    return 0;
}
