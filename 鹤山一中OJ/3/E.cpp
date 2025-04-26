#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    while (getline(cin, s1) && getline(cin, s2))
        cout << s1 << s2 << endl;
    
    return 0;
}