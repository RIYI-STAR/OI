#include <iostream>
using namespace std;

int func(int a, int b){ 
    cout << a+b <<endl;
    return 0;
}

int main(){
    int a,b;
    while(cin >> a >> b){
        func(a, b);
    }
    return 0;
}