#include <iostream>
using namespace std;

int main()
{
    string n;
    while (cin >> n)
    {
        bool flag = true;
        for (int i = 0; i <= n.size() / 2; i++)
            if (n[i] != n[n.size() - 1 - i])
            {
                flag = false;
                break;
            }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}