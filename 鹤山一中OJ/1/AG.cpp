#include <iostream>
#include <string> 
using namespace std;

int main(){
	double a;double b;
	while(cin>>a>>b){
		if(a>=b)cout << "No Solution";
		else{
			double c = (b-a)/4;
			double x = (double)(int)c;
			if(x==c) for(int i=a;i<=b;i+=x)cout << i << ' ';
			else cout << "No Solution";
		}
		cout << endl;
	}
}