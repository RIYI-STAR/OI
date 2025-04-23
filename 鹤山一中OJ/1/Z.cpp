#include <iostream>
#include <cmath>
using namespace std;

int main(){
//	F＝C×9/5＋32
	double C;
	while(cin>>C){
		double F=(C-32)*5/9;
		printf("%.4f\n",F);
	}
}