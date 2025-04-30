#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int res = 0;
        for(int i = 1;i < n;i++)
            if (n%i == 0) res += i;
        cout << ((n == res) ? "Yes" : "No") << endl;
        
    }
    return 0;
}