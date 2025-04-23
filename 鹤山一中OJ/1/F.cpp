#include <iostream>
using namespace std;

bool sum(int a,int b, int c){
	if(a>b){
		if(b>=c){
		return a*a==b*b+c*c;	
		}
	}else if(c>b){
		return c*c==a*a+b*b;	
	}else{
		return b*b==a*a+c*c;	
	}
}
int main()
{
	int a,b,c;
    while(cin >> a >> b >> c){
        if(sum(a,b,c)){
	 	   cout << "Yes" << endl;
	    }else{
	 	   cout << "No" << endl;
	    }
    }
    return 0;
}