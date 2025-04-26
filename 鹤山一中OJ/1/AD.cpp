#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		double r=1;
		for(int i=1;i<=n;i++){
			double m=1;
			for(int j=1;j<=i;j++){
				m*=j;
			}
			r+=1/m;
		}
		printf("%.10f\n",r);
	}
}