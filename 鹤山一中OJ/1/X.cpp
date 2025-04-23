#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[4];
	while(cin>>arr[0]){
		int n = 0;
		for(int i=1;i<4;i++)cin >> arr[i];
		for(int i=arr[0];i<=arr[1];i++){
			if(i%arr[2]==0&&i%arr[3]==0){
				n++;
			}
		}
		cout << n << endl;
	}
}