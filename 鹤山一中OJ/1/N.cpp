#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[8];
	while(cin>>arr[0]){
		int a=0,b,c=-1,d;
		for(int i=1;i<8;i++)cin >> arr[i];
		int t;
		for(int i=2;i<8;i+=2){
			if(arr[i]==arr[0]){
				b=i;
			}else{
				if(c==-1)c=i;
				d=i;
			}
		}
		cout << abs((arr[c]-arr[a])*(arr[b+1]-arr[a+1])) << endl;
	}	
}