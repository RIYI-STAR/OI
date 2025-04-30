#include <iostream>
using namespace std;

void func()
{
    int *a = new int[100000000];
    func();
}

int main()
{
    func();
    return 0;
}
