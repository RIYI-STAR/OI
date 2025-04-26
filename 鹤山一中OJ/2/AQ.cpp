#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int to_real(string s)
{
    int res = 0;
    for (char c : s)
        res = res * 10 + (c - '0');
    return res;
}

string to_str(int n)
{
    string res = "000";
    int i = 2;
    while (n > 0 && i >= 0)
    {
        int temp = n % 10;
        res[i--] = temp + '0';
        n /= 10;
    }
    return res;
}

bool cmp(char a, char b)
{
    return a > b;
}

int main()
{
    string ss;
    while (cin >> ss)
    {

        int res = 0;
        while (true)
        {
            string s = ss;
            sort(s.begin(), s.end());
            int n1 = to_real(s);
            sort(s.begin(), s.end(), cmp);
            int n2 = to_real(s);
            string ans = to_str(abs(n1 - n2));
            if (ans == ss)
                break;
            else
            {
                ss = ans;
                res++;
            }
        }
        // cout << ss << endl;
        cout << res << endl;
    }
    return 0;
}