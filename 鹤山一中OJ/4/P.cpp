#include <iostream>
#include <vector>
#include <map>
using namespace std;

const map<char, int> signs = {
    {'.', 1},
    {',', 1},
    {'?', 1},
    {'!', 1},
    {';', 1},
    {':', 1},
    {'"', 1},
    {'\'', 1}};

bool cmp(string a, string b)
{
    string temp_a = a, temp_b = b;
    for (int i = 0; i < temp_a.size(); i++)
        temp_a[i] = tolower(temp_a[i]);
    for (int i = 0; i < temp_b.size(); i++)
        temp_b[i] = tolower(temp_b[i]);
    // cout << temp_a << " " << temp_b << endl
    //      << (temp_a == temp_b) << endl;
    // cout << temp_a.size() << " " << temp_b.size() << endl;
    return temp_a == temp_b;
}

void make(string &a, string &b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            b[i] = tolower(b[i]);
        else if (a[i] >= 'A' && a[i] <= 'Z')
            b[i] = toupper(b[i]);
    }
}

int main()
{
    string s;
    string a, b;
    while (getline(cin, s))
    {
        getline(cin, a);
        getline(cin, b);
        vector<string> v;
        string temp = "";
        for (char c : s)
        {
            if (c == ' ' || signs.count(c))
            {
                v.push_back(temp);
                temp = "";
                v.push_back(temp + c);
            }
            else
            {
                temp += c;
            }
        }
        if (!temp.empty())
            v.push_back(temp);
        for (string word : v)
        {
            if (cmp(a, word))
            {
                make(word, b);
                cout << b;
            }
            else
                cout << word;
        }
        cout << endl;
    }
    return 0;
}

// a People inneed is people indeed.
// peoPLe
// friEnD
