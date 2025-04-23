#include <iostream>
#include <cmath>
using namespace std;

int max(int * arr){
	int r = arr[0];
	for(int i=1;i<3;i++){
		if(r<arr[i])r=arr[i];
	}
	return r;
}

int main(){
	int x;int y;
	while(cin>>x>>y){
		int arr[3];
		arr[0]=x;
		arr[1]=y;
		arr[2]=180-x-y;
		int m = max(arr);
		if(m==90)cout << "Right Triangle";
		else if(m>90) cout << "Obtuse Triangle";
		else cout << "Acute Triangle";
		cout << endl;
	}
}