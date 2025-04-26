#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int HH;int MM;int hh;int mm;
	while(scanf("%d:%d %d:%d",&HH,&MM,&hh,&mm)!=EOF){
		int H = HH+hh;
		int M = MM+mm;
		if(M>=60)H++;
		H = H%24;
		M = M%60;
		if(H<10)cout << 0;
		cout << H << ':';
		if(M<10)cout << 0;
		cout << M << endl;
	}
}