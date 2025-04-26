#include <iostream>
#include <cmath> 
using namespace std;

int sum(float a) {
    return (int)(ceil(a));
}

int main() {
    float r;
    while (cin >> r) {
        cout << sum(r) << endl;
    }
    return 0;
}
