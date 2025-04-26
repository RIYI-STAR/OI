#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;int b;int c;
	while(cin>>a>>b>>c){
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}