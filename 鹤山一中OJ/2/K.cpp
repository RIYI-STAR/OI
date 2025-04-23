#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int m,n;
	while(cin>>n>>m){
		int arr[m];
		for(int i=0;i<m;i++)arr[i]=i+1;
		int temp = 0;
		int x=m-1;
		while(arr[x]!=n){
			if(arr[x]==n)cout << arr[x];
			else if(arr[x]>n) x/=2;
			else if(arr[x]<n) x = x+x/2;
			temp++;
			if(temp>=m){
				x = -1;
				break;
			}
		}
		
		cout << temp;
		cout << endl;
	}
}