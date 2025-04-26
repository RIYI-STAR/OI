#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        bool r = (x1 == x2),
             c = (y1 == y2),
             m = (x1 + y1 == x2 + y2),
             n = (x1 - y1 == x2 - y2);
        cout << ((r || c || m || n)? "Yes" : "No") << endl;
    }
    return 0;
}