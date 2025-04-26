#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int temp = 1;
		for(int i=2;i<=sqrt(n);i++){
//			cout << i << ' ' << sqrt(n) << endl;
			if(n%i==0){
				cout << "No";
				break;
			}
			else temp++;
		}
		if(temp==(int)sqrt(n))cout << "Yes";
		cout << endl;
	}
}