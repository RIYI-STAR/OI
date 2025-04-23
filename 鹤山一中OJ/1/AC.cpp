#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N[3];
	while(cin>>N[0]){
		for(int i=1;i<3;i++)cin >> N[i];
		for(int i=0;i<3;i++){
			if(i==0){
				int n = N[i];
				for(n;n<1000;){
					cout << 0;
					n*=10;
				}
			}
			if(N[i]<10&&i>0){
				cout << 0 << N[i];
			}else cout << N[i];
			if(i<2)cout << '-';
			else cout << endl;
		}
	}
}