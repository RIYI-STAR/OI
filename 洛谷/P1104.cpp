// P1104 生日

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string name;
    int year, month, day, id;
};

bool compare(Student a, Student b) {
    if (a.year!= b.year) return a.year < b.year;
    if (a.month!= b.month) return a.month < b.month;
    if (a.day!= b.day) return a.day < b.day;
    return a.id > b.id;
}

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; i++) {
        string name;
        int year, month, day;
        cin >> name >> year >> month >> day;
        students[i] = Student();
        students[i].name = name;
        students[i].year = year;
        students[i].month = month;
        students[i].day = day;
        students[i].id = i;
    }
    sort(students.begin(), students.end(), compare);
    for (int i = 0; i < n; i++) {
        cout << students[i].name << endl;
    }
}