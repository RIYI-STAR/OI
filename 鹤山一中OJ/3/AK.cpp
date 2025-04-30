#include <iostream>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int res = 0;
        int temp = 0;
        for (char c : s)
        {
            if (c == 'T')
            {
                temp += 1;
                res += temp;
            }
            else if (c == 'F')
            {
                temp = 0;
            }
        }
        cout << res << endl;
    }
}