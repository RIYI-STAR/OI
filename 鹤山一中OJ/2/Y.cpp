#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int m,n,k;
	while(cin>>m>>n>>k){
		int arr[m];
		for(int i=0;i<m;i++)cin>>arr[i];
		
		int a = arr[n];
		arr[n] = arr[k];
		arr[k] = a;
		
		for(int i=0;i<m;i++)cout << arr[i] << ' ';
		cout << endl;
	}
}