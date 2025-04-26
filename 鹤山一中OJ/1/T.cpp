#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415926;

int main(){
	double arr[2];
	while(cin>>arr[0]){
		double degree;
		cin>>arr[1];
		cin>>degree;
		degree=degree*PI/180;
		double h = sin(degree)*arr[0];
		double S = (h*arr[1])/2;
		printf("%.2f\n",S);
	}
}