#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int getsize(int n){
	int r=0;
	while(n>0){
		n/=10;
		r++;
	}
	return r;
}

int main(){
	long int n;
	while(cin>>n){
		int r = 1;
		for(int i=0;i<5;i++){
			r*=n;
			for(int j=0;j<getsize(r);j++)r%=10;
		}
		cout << r << endl;
	}
}