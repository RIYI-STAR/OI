#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
        cout << ceil((1+sqrt(1+8*n))/2) + 1 << endl;

    return 0;
}