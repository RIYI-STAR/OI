#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int x[n];
		int y[n];
		
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		
		
		for(int i=n-1;i>0;i--){
			for(int j=1;j<=i;j++){
				
				if(x[j]<x[j-1]){
					int a = x[j];
					x[j] = x[j-1];
					x[j-1] = a;
					
					int b = y[j];
					y[j] = y[j-1];
					y[j-1] = b;
				}else if(x[j]==x[j-1]){
					if(y[j]<y[j-1]){
						int a = x[j];
						x[j] = x[j-1];
						x[j-1] = a;
						
						int b = y[j];
						y[j] = y[j-1];
						y[j-1] = b;
					}
				}
				
//				cout << "i,j,n:" << i << ' ' << j << ' ' << n << endl;
//				for(int m=0;m<n;m++){
//			 		cout << '(' << x[m] << ',' << y[m] << ')';
//			 		if(m<n-1)cout << ',';
//				}
//				cout << endl;
//				for(int m=0;m<n;m++){
//			 		cout << x[m];
//			 		if(m<n-1)cout << ',';
//				}
//				cout << endl;
//				for(int m=0;m<n;m++){
//			 		cout << x[m];
//			 		if(m<n-1)cout << ',';
//				}
//				cout << endl;
			}
		}	

		
		for(int i=0;i<n;i++){
			 cout << '(' << x[i] << ',' << y[i] << ')';
			 if(i<n-1)cout << ',';
		}
		cout << endl;
	}
}


//10 3 5 4 1 5 3 3 6 12 3 6 9 2 8 1 9 5 3 6 1
//3
//2 3 7 6 1 5
//5
//5 5 5 4 5 3 5 2 5 1
//5
//5 3 6 2 1 3 1 1 5 1