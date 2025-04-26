#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int m;
	while(cin>>m){
		int arr[m];
		for(int i=0;i<m;i++)cin>>arr[i];
		int temp = 0;
		int min = 9999;
		for(int i=0;i<m;i++){
			if(arr[i]<min){
				temp = i;
				min = arr[i];
			}
		}
		int a = arr[temp];
		arr[temp] = arr[0];
		arr[0] = a;
		
		for(int i=0;i<m;i++)cout << arr[i] << ' ';
		cout << endl;
	}
}