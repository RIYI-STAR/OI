#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, char> mp = {
    {0, '0'},
    {1, '1'},
    {2, '2'},
    {3, '3'},
    {4, '4'},
    {5, '5'},
    {6, '6'},
    {7, '7'},
    {8, '8'},
    {9, '9'},
    {10, 'A'},
    {11, 'B'},
    {12, 'C'},
    {13, 'D'},
    {14, 'E'},
    {15, 'F'}};

string to_hex(int x)
{
    if (x == 0) return "00";
    string res = "";
    while (x > 0)
    {
        res = mp[x % 16] + res;
        x /= 16;
    }
    if (res.size() == 1)
        res = "0" + res;
    return res;
}

int main()
{
    int n;

    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            int t, w;
            cin >> t >> w;
            if (t >= 2)
                cout << to_hex(t | (1 << 7)) << to_hex(w) << endl;
            else
                cout << to_hex(t) << to_hex(w) << endl;
        }
    }
    return 0;
}