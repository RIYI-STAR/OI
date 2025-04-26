#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int m,n;
	while(cin>>m>>n){
		int mm = m>n?m:n;
		int nn = m<=n?m:n;
		int r = mm%nn;
		while(r!=0){
			mm = nn;
			nn = r;
			r = mm%nn;
//			cout << mm << ' ' << nn << ' ' << r << endl;
		}
		cout << nn;
		cout << endl;
	}
}