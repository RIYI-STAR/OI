#include <iostream>
using namespace std;

string to_oct(int n)
{
    if (n == 0)
        return "0";
    string res = "";
    while (n > 0)
    {
        res.insert(0, 1, ((n % 8) + '0'));
        n /= 8;
    }
    return res;

}

int to_dec(string n)
{
    int res = 0;
    for (int i = 0; i < n.size(); i++)
        res = res * 2 + n[i] - '0';

    return res;
}

int main()
{
    string n;
    while(cin >> n)
    {
        cout << to_oct(to_dec(n)) << endl;
    }
    return 0;
}