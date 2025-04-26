#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp != k) cout << temp << " ";
        }
        cout << endl;
    }
}