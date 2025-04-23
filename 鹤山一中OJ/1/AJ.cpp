#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		int min = 9999999;
		int r;
		for(int i=0;i<n;i++){
			if(arr[i]<min){
				min=arr[i];
				r=i;
			}
		}
		cout << r << endl;
	}
}