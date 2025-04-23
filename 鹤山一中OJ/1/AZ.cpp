#include <iostream>
#include <string>
using namespace std;

int main(){
	double a;double b;double h;double r;
	while(cin>>a>>b>>h>>r){
		double d=2*r;
		if(a>=d&&b>=d&&h>=d)cout <<"Yes";
		else cout << "No";
		cout << endl;
	}
}