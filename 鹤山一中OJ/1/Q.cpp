#include <iostream>
using namespace std;

int main(){
	double arr[4];
	while(cin>>arr[0]){
		for(int i=1;i<4;i++)cin>>arr[i];
		double x_m = (arr[0]+arr[2])/2;
		double y_m = (arr[1]+arr[3])/2;
		printf("(%.1f,%.1f)\n",x_m,y_m);
	}
}