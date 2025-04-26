#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		for(int i=0;i<n;i++)if((i-1)%2!=0)cout << arr[i] << ' ';
		for(int i=0;i<n;i++)if((i-1)%2==0)cout << arr[i] << ' ';
		cout << endl;
	}
}