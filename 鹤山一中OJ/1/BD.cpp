#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int r = (n-1)*n/2;
		cout << r << ' ' << 2*r << endl;
	}
}