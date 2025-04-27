#include <iostream>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        int d = b[b.size() - 1] - '0';
        
        int t = a[a.size() - 1] - '0';
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] >= '0' && a[i] <= '9')
            {
                t = a[i] - '0';
                break;
            }
        }
        bool flag = true;
        if (a.size() != 6)
            flag = false;
        if (a[0] < 'A' || a[0] > 'Z')
            flag = false;
        for (int c : a)
            if (c == 'O' || c == 'I')
            {
                flag = false;
                break;
            }
        if (d % 2 != t % 2)
            flag = false;
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}