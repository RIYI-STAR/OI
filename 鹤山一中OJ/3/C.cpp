#include <iostream>
using namespace std;

int main()
{
    string n;
    while (cin >> n)
    {
        if (n[0] == '0')
            cout << n << endl;
        else
        {
            for (int i = 1; i < n.length(); i++)
                n[i] = (n[i] == '0') ? '1' : '0';
            n[n.size() - 1]++;
            for (int i = n.size() - 1; i >= 1; i--)
                if (n[i] >= '2')
                {
                    n[i] -= 2;
                    n[i - 1]++;
                }
            if (n[0] >= '2')
                n[0] -= 2;
            cout << n << endl;
        }
    }
    return 0;
}