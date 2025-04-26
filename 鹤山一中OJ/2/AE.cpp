#include <iostream>
#include <string>
using namespace std;

int str_to_int(string n){
	int r = 0;
	int a = 1;
	for(int i=n.length()-1;i>=0;i--){
		r += (n[i]-'0')*a;
		a*=10;
	}
	return r;
}

int main() {
	string n;
	while(cin>>n){
		int r = 0;
		int l = n.length();
		for(int i=0;i<l;i++){
			int rr = 1;
			for(int j=0;j<l;j++)rr*=n[i]-'0';
			r += rr;
		}
		int nn = str_to_int(n);
		if(nn==r)cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}