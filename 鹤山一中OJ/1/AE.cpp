#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=1;i<=n;i++){
			int an = 3*i-2;
			cout << an << ' ';
		}
		cout << endl;
	}
}