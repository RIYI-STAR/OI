#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int n;
	while(cin>>n){
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++)cout << '*';
			cout << endl;
		}
		
	}
}