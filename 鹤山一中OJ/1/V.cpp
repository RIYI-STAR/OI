#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double n;
	while(cin>>n){
		double nn = sqrt(n);
		int nnn = (int)nn;
		double nnnn = (double)nnn;
		if(nn==nnnn)cout << "Yes" << endl;
//		else if(n==0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}