#include <iostream>
using namespace std;

int main(){
	int arr[3];
	while(cin>>arr[0]){
		for(int i=1;i<3;i++)cin>>arr[i];
		int r = arr[0]+arr[1]+arr[2];
		if(r>10)cout << "Big" << endl;
		else cout << "Small" << endl;
	}
	return 0;
}