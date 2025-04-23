#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double arr[4];
	while(cin>>arr[0]){
		for(int i=1;i<4;i++)cin>>arr[i];
		double x = abs(arr[0]-arr[2]);
		double y = abs(arr[1]-arr[3]);
		double r = sqrt(x*x+y*y);
		printf("%.2f\n",r);
	}
}