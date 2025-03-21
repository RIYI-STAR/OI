#include <iostream>
using namespace std;

int main(){
    int b=3, p=3;
    int sum = 1;
    while(p>0){
        if(p&1) sum*=b;
        b*=b;
        p >>= 1;
    }
    cout << sum << endl;
}