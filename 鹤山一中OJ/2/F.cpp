#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,k;
	while(cin>>n>>k){
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		cout << arr[k-1];
		cout << endl;
	}
}