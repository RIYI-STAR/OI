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
            cout << n << endl;
        }
    }
    return 0;
}