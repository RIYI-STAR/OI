#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	double a;double b;double c;double d;
	while(scanf("%lf+%lfi %lf+%lfi",&a,&b,&c,&d)!=EOF){
//		cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
		double x = a+c;
		double y = b+d;
		printf("%.2f+%.2fi\n",x,y);
	}
}