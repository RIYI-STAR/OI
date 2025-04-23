#include <iostream>
#include <cmath>
using namespace std;

float f(float x,float a,float b ,float c){
	return pow(x,a)+sin(b)+log10(c); 
}
int main()
{
	float x,a,b,c;
	while(cin >> x >> a >> b >> c){
		printf("%.2f", f(x,a,b,c));
		cout << endl;
	}
	return 0;
} 
