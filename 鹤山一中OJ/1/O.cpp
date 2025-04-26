#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double arr[6];
	while(cin>>arr[0]){
		for(int i = 1;i<6;i++)cin >> arr[i];
		double x = (arr[0]+arr[2]+arr[4])/3;
		double y = (arr[1]+arr[3]+arr[5])/3;
		printf("(%.2lf,%.2f)\n",x,y);
	}
	return 0;
}