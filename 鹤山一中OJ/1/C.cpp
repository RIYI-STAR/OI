#include <iostream>
using namespace std;

int f(int n, int i, int j){
	int b;
    for(int a=1;a<=j;a++){
		b=a;
	}
    cout << (i+b)%n << endl;
    return 0;
}

int main(){
    int n,i,j;
    while(cin >> n >> i >> j){
        f(n, i, j);
    }
    return 0;
}