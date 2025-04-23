#include <iostream>
using namespace std;

int main(){
	char arr[8] = {'A','S','D','F','a','s','d','f'};
	int n;
	while(cin>>n){
		n%=8;
		cout << arr[n-1] << endl;
	}
}