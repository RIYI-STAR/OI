#include <iostream>
using namespace std;

int main()
{
    int n, key;
    while (cin >> n >> key)
        cout << (n^key) << ' ' << (n^key^key) << endl;
    return 0;
}