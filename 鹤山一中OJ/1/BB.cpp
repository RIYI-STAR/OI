#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	char x;int y;
	while(scanf("%1s%d",&x,&y)!=EOF){
		if(x=='A'||x=='B') cout << "Recyclable Materials";
		if(x=='C'||x=='D') cout << "Kitchen Waste";
		if(x=='E') cout << "Hazardous Waste";
		if(x=='F') cout << "Other Garbage";
		cout << endl;
	}
}