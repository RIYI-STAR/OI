#include <iostream>
#include <string>
using namespace std;

// h = ( d + ⌊ 13(m+1)/5 ⌋ + k + ⌊ k/4​ ⌋+⌊ j/4 ⌋+ 5j ) mod 7
// d 是日期（即日）

// m 是月份（1月和2月调整为13月和14月）

// k 是年份的后两位

// j 是年份的前两位

string getWeekDay(int year, int month, int day)
{
    // Zeller's Congruence Algorithm
    if (month <= 2)
    {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    // 计算星期几，0是Saturday, 1是Sunday，依此类推
    int h = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    // 结果转化为星期几的名称
    string daysOfWeek[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    return daysOfWeek[h];
}

int main()
{
    int year, month, day;
    while (cin >> year >> month >> day)
        cout << getWeekDay(year, month, day) << endl;

    return 0;
}
