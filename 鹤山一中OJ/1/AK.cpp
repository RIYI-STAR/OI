#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		n++;
		double arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		for(int i=0;i<n;i++)printf("%.2f ",arr[i]);
		cout << endl;
	}
}