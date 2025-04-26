#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[3][3];
	while(cin>>arr[0][0]){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++)if(i||j)cin>>arr[i][j];
		}
		if(arr[0][0]+arr[0][1]+arr[0][2]==15&&arr[1][0]+arr[1][1]+arr[1][2]==15&&arr[2][0]+arr[2][1]+arr[2][2]==15&&arr[0][0]+arr[1][0]+arr[2][0]==15&&arr[0][1]+arr[1][1]+arr[2][1]==15&&arr[0][1]+arr[1][1]+arr[2][1]==15&&arr[0][0]+arr[1][1]+arr[2][2]==15&&arr[0][2]+arr[1][1]+arr[2][0]==15)cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}