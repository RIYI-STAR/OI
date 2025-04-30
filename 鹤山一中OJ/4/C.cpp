#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

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
                if (temp != "")
                {
                    words.push_back(temp);
                    temp = "";
                }
            }
            else if (c == '.' && (s[i - 1] >= 'a' && s[i - 1] <= 'z' || s[i - 1] >= 'A' && s[i - 1] <= 'Z') && (s[i + 1] >= 'a' && s[i + 1] <= 'z' || s[i + 1] >= 'A' && s[i + 1] <= 'Z'))
            {
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
        words.push_back(temp);
        // for (int i = 0; i < words.size(); i++)
        //     cout << words[i] << " ";
        // cout << endl;
        cout << words.size() << endl;
    }
    return 0;
}
