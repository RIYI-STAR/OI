#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int sum(int n){
	int nn = n%2;
	if(nn)return 3*n+1;
	else return n/2;
}

int main(){
	int n;
	while(cin>>n){
		int maxn = n;
		int temp = 0;
		while(1){
			n = sum(n);
			maxn = max(maxn, n);
			temp++;
			if(n==1)break;
		}
		
		
		cout << temp << ' ' << maxn << endl;
	}
}
