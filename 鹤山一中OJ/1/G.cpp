#include <iostream>
using namespace std;

float sum(float x,float y){
	int a=1;
	for(float i=0;i<y;i++){
		a*=x;
	}
	return a;
}
int main()
{
	float x,y;
	while(cin >> x >> y){
		printf("%.2f", sum(x,y));
		cout << endl;
	}
    return 0;
}