#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		for(int i=1;i<=b;i++){
			for(int j=1;j<=b;j++){
				if(i*2+4*j==b&&i+j==a)cout << i << ' ' << j << endl;
			}
		}
	}
}