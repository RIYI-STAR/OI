#include <iostream>
#include <cmath>
using namespace std;

double * getl(double xa,double ya,double xb,double yb){
	double o = xb-xa;
	double l = yb-ya;
	double k = l/o;
	if(o==0)k=0;
	if(l==0)k=0;
	double b = ya-xa*k;
	double * r = new double[2];
	r[0]=k;
	r[1]=b;
	return r;
}

double gety(double k,double b,double x){
//	cout << k << ' ' << b << ' ' << x << endl;
	return x*k+b;
}

int main(){
	double arr[6];
	while(cin>>arr[0]){
		for(int i = 1;i<6;i++)cin >> arr[i];
		double * r = getl(arr[0],arr[1],arr[2],arr[3]);
		double y = gety(r[0],r[1],arr[4]);
		if(y==arr[5]||arr[0]==arr[4]&&arr[0]==arr[2])cout << "Yes" <<endl;
		else cout << "No" << endl;
	}
}