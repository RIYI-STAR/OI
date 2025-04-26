#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int sum(int n){
	int r = 1;
	if(!n)return n;
	while(n>0){
		r *= n%10;
		n /= 10;
	}
	return r;
}

int main(){
	int n;
	while(cin>>n){
		n = sum(n);
		while(n>=10){
			n = sum(n);
		}
		cout << n << endl;
	}
}
