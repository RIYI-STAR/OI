#include <iostream>
#include <cmath>
using namespace std;

double * getl(double xa,double ya,double xb,double yb){
	double o = xb-xa;
	double l = yb-ya;
	double k = l/o;
	if(o==0)k=xa;
	if(l==0)k=0;
	double b = ya-xa*k;
	double * r = new double[2];
	r[0]=k;
	r[1]=b;
	return r;
}

int main(){
	double arr[4];
	while(cin>>arr[0]){
		for(int i = 1;i<4;i++)cin >> arr[i];
		double * r = getl(arr[0],arr[1],arr[2],arr[3]);
		if(arr[2]==arr[0])cout << "NaN" << endl;
		else printf("%.2f\n",r[0]);
	}
}