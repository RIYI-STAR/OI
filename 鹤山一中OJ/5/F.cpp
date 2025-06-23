#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        stack<char> s;
        int pre = 0;
        for (char c : a)
        {
            s.push(c);
            if (!s.empty() && s.top() == b[pre])
            {
                pre++;
                s.pop();
            }
        }
        // cout << pre << endl;
        // cout << s.empty() << endl;
        for (int i = 0; i < 3; i++)
            if (!s.empty() && s.top() == b[pre])
            {
                pre++;
                s.pop();
            }
        if (s.empty()) cout << "True";
        else cout << "False";
        cout << endl;
    }
    return 0;
}