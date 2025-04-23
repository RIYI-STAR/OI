#include <iostream>
#include <cmath>
using namespace std;

string num_to_str(int n){
	string r="";
	while(n>=1){
		char rr = (n%10)+'0';
		r = rr+r;
		n/=10;
	}
	return r;
}

int main(){
	int L,R;
	while(cin>>L>>R){
		int temp = 0;
		for(int i=L;i<=R;i++){
			string ii = num_to_str(i);
			for(int j=0;j<ii.length();j++)if(ii[j]=='2')temp++;
		}
		cout << temp << endl;
	}
}