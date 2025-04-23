#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int n,k;
	while(cin>>n>>k){
		int arr[n];
		for(int i=0;i<n;i++)cin >> arr[i];
		for(int i=0;i<n;i++)if(i!=k-1)cout << arr[i] << ' ';
		cout << endl;
	}
}