#include <iostream>
using namespace std;

int main(){
    unsigned int M, N;
    cin >> M >> N;
    int R = (M + N)%7;
    switch(R){
        case 0:
            cout << "星期日" << endl;
            break;
        case 1:
            cout << "星期一" << endl;
            break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
            break;
        case 4:
            cout << "星期四" << endl;
            break;
        case 5:
            cout << "星期五" << endl;
            break;
        case 6:
            cout << "星期六" << endl;
            break;
    }
    return 0;
}