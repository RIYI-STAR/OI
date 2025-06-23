#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<char, char> m = {
        {'(', ')'},
        {'[', ']'},
        {'{', '}'}};
    string str;
    while (getline(cin, str))
    {
        stack<char> s; 

        for (char c : str)
        {
            if (c == '(' || c == '[' || c == '{')
            
                s.push(c);
            
            else if (c == ')' || c == ']' || c == '}')
            {
                if (s.empty() || m[s.top()] != c)
                    s.push(c);
                else
                    s.pop();
            }
        }

        if (s.empty())
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}