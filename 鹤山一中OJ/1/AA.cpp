#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double n;
	while(cin>>n){
		int k = 1;
		for(int i=1;i<n;i++){
			cout << k << ',';
			k+=2;
		}
		cout << k << endl;
	}
}