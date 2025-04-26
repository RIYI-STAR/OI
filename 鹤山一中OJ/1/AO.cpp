#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;int b;int c;
	while(cin>>a>>b>>c){
		if(a==b&&a==c&&b==c)cout << "Equilateral Triangle" << endl;
		else if(a==b||a==c||b==c){
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)cout << "Isosceles Right Triangle" << endl;
			else cout << "An Isosceles Triangle " << endl;
		}
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)cout << "Right Triangle" << endl; 
		else cout << "Non-equilateral Triangle" << endl;
	}
}