#include <iostream>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        string ss = "";
        for (char c : s)
        {
            ss.push_back(c);
            if(c == '.') break;
        }
        int d = stoi(ss);
        if (d >= 0 && d <= 127) cout << 'A';
        else if (d >= 128 && d <= 191) cout << 'B';
        else if (d >= 192 && d <= 223) cout << 'C';
        else if (d >= 224 && d <= 239) cout << 'D';
        else if (d >= 240 && d <= 255) cout << 'E';
        cout << endl;
    }
    return 0;
}