#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int to_num(string s)
{
    int res = 0;
    for(int c : s)
        res = res * 10 + c - '0';
    return res;
}

int main()
{
    string n;
    while(cin >> n)
    {
        int num = to_num(n);
        int ns = sqrt(num);
        bool p = false;
        if(ns*ns == num)
            p = true;
        bool b = true;
        for(int i = 0; i < n.size()/2+1; i++)
            if (n[i] != n[n.size()-1-i])
                b = false;
        cout << ((p && b )? "Yes" : "No") << endl;
    }
    return 0;
}