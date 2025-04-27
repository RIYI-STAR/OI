#include <iostream>
#include <string>
using namespace std;

string sum()
{
    char temp = getchar();
    if (temp != '*') return sum() + temp;
    else return "";
}

int main()
{
    cout << sum() << endl;
}