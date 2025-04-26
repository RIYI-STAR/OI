#include <iostream>
#include <cmath>
using namespace std;

double * getl(double xa,double ya,double xb,double yb){
	double o = xb-xa;
	double l = yb-ya;
	double k = l/o;
	double b = ya-xa*k;
	double * r = new double[4];
	r[0]=k;
	r[1]=b;
	r[2]=o;
	r[3]=l;
	return r;
}
//1 0 1 2 2 1 1 6

int main(){
	double arr[8];
	while(cin>>arr[0]){
		for(int i = 1;i<8;i++)cin >> arr[i];
		double * ra = getl(arr[0],arr[1],arr[2],arr[3]);
		double * rb = getl(arr[4],arr[5],arr[6],arr[7]);
//		cout << ra[0] << ' ' << rb[0] << endl;
//		cout << (ra[0]==-rb[0]&&ra[0]) <<(ra[2]&&!rb[3]) <<(!ra[3]&&!rb[2]) << endl;
		if((ra[0]==rb[0]&&ra[0])||(!ra[2]&&!rb[2])||(!ra[3]&&!rb[3]))cout << "Parallel" << endl;
 		else if((ra[0]==-rb[0]&&ra[0])||(!ra[2]&&!rb[3])||(!ra[3]&&!rb[2]))cout << "Perpendicular" << endl;
		else cout << "Intersect" << endl;
	}
}