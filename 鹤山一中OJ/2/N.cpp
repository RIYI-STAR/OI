#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int a,b;
	while(cin>>a>>b){
		int temp = 0;
		for(int x=1;x<=2019;x++)for(int y=1;y<=2019;y++){
			if(x*a+b*y==2019)cout << x << ' ' << y << endl;
			else temp++;
		}
		if(temp>=2019*2019)cout << "Unsolvable" << endl;
	}
}