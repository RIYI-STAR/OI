#include <iostream>
#include <cmath>
using namespace std;

double getx(double x,double y){
	return sqrt(x*x+y*y);
}

int main(){
	double m;double n;double a;double b;
	while(cin>>m>>n>>a>>b){
		double x = getx(m,n);
		if(a<=x||b<=x)cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}