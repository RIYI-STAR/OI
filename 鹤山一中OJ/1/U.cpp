#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double arr[2];
	while(cin>>arr[0]){
		cin>>arr[1];
		double S = (arr[0]*arr[1])/2;
		printf("%.2f\n",S);
	}
}