#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        vector<int> temp;
        for (char c : s)  temp.push_back(c - '0'); 
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string command;
            cin >> command;
            // cout << "command:" << command << ' ' << (command.substr(0,4) == "PUSH") << endl;
            if (command == "POP")
                if (!temp.empty()) temp.pop_back();
            if (command.substr(0,4) == "PUSH")
            {
                int num = command[4] - '0';
                temp.push_back(num);
            }

            // for (int i = 0; i < temp.size(); i++) cout << temp[i] << " ";
            // cout << endl;
        }
        if (temp.empty()) cout << 0 << endl;
        else cout << temp.back() << endl;
    }
    return 0;
}