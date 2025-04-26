#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;int b;int c;
	while(cin>>a>>b>>c){
		if(a==b||a==c||b==c)cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}