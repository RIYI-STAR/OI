#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mp = {
    {'0', 0},
    {'1', 1},
    {'2', 2},
    {'3', 3},
    {'4', 4},
    {'5', 5},
    {'6', 6},
    {'7', 7},
    {'8', 8},
    {'9', 9},
    {'A', 10},
    {'B', 11},
    {'C', 12},
    {'D', 13},
    {'E', 14},
    {'F', 15},
};


int to_dec(string n)
{
    int res = 0;
    for (char c : n)
        res = res * 16 + mp[c];
    return res;
}

string to_bin(int n)
{
    if (n == 0)
        return "0";
    string res = "";
    while (n > 0)
    {
        res.insert(0, 1, ((n % 2) + '0'));
        n /= 2;
    }
    return res;

}

int main()
{
    string n;
    while (cin >> n)
    {
        cout << to_bin(to_dec(n)) << endl;
    }
    return 0;
}