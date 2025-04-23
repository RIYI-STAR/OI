#include <iostream>
#include <string> 
using namespace std;

int main(){
	double i;
	while(cin>>i){
		for(int j=1;j<=i;j++)cout << j << '*' << i << '=' << j*i << ' ';
		cout << endl;
	}
}