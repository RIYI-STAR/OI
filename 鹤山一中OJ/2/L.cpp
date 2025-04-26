#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int a = 1, b = 1;
        cout << a << ' ';
        for (int i = 1; i < n; i++)
        {
            cout << b << ' ';
            int temp = a + b;
            a = b;
            b = temp;
        }
        cout << endl;
        
    }
}