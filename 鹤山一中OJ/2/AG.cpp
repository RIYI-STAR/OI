#include <iostream>
#include <cmath>
#include <algorithm>
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
            cout << temp << " ";
        }

        cout << k << endl;
    }
    return 0;
}
