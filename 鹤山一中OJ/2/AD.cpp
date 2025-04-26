#include <iostream>
using namespace std;

int main() {
	int a,b;
	while(cin>>a>>b){
		int *arr[a];
		for(int i=0;i<a;i++){
			arr[i] = new int[b];
			for(int j=0;j<b;j++){
				cin>> arr[i][j];
			}
		}
		for(int i=0;i<b;i++){
			for(int j=0;j<a;j++){
				cout << arr[j][i] << ' ';
			}
			cout << endl;
		}
	}
}