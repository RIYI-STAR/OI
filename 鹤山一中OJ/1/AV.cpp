#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double n;
	while(cin>>n){
		double nn = sqrt(n);
		int a = (int)nn;
		if((double)a==nn)cout << '(' << a << ',' << a << ')' << endl;
		else cout << '(' << a << ',' << a+1 << ')' << endl;
	}
}