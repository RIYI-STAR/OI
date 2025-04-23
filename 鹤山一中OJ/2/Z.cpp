#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int m;
	while(cin>>m){
		int arr[m];
		int ar[m];
		for(int i=0;i<m;i++){
			ar[i]=-99999;
		}
		for(int i=0;i<m;i++)cin>>arr[i];
		
		int t=0;
		
		for(int i=0;i<m;i++){
			int temp = 0;
			for(int j=0;j<m;j++)if(arr[i]!=ar[j])temp++;
			if(temp==m){
				ar[t]=arr[i];
				t++;
			}
		}
		
		
		cout << '{';
		
	
		for(int i=0;i<t;i++){
			cout << ar[i];
			if(i<t-1)cout << ',';
		}
		
		
		cout << '}' << endl;
	}
}