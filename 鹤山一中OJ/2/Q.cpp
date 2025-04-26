#include <iostream>
#include <string>
using namespace std;

int main(){
	int s;
	while(cin>>s){
		int arr[s];
		for(int i=0;i<s;i++)cin>>arr[i];
		for(int i=1;i<s;i++){
			if(arr[i]<arr[i-1])
				swap(arr[i],arr[i-1]);
		}
		for(int i=0;i<s;i++)cout << arr[i] << ' ';
		cout << endl;
	}
}