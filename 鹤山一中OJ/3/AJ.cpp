#include <iostream>
#include <vector>
using namespace std;


bool isLeap(int y)
{
    return (y % 4 == 0 && y % 100!= 0) || y % 400 == 0;
}

int main() {
    int y, m, d;
    while (scanf("%d-%d-%d", &y, &m, &d) != EOF)
    {
        vector<int> months = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (isLeap(y)) months[2] = 29;
        months[m] = d;
        int res = 0;
        for (int i = 1; i <= m; i++)
            res += months[i];
        cout << res << endl;
    }
    return 0;
}