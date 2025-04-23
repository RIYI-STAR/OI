#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int k = 0;
		while(n>0){
//			cout << n << endl;
			if(n&1)k++;
			n>>=1;
		}
		cout << k << endl;
	}
}