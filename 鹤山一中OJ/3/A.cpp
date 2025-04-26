#include <iostream>
using namespace std;

int to_num(string s)
{
    int res = 0;
    for (char c : s) res = res * 10 + (c - '0');
    return res;
}

int main() 
{
    string n;
    while (cin >> n) {
        if (n.size() == 1) cout << (int)n[0];
        else cout << (char)(to_num(n));
        cout << endl;
    }
    return 0;
}