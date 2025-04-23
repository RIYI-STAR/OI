#include <iostream>
#include <string>
using namespace std;

int sum(long long int m, int n){
	if(m%n==0){cout << "Yes" << endl;
	}else{
		cout << "No" <<endl;	
	} 
	return 0;
}

int main()
{
	float m,n;
    while(cin >> m >> n){
		sum(m,n);
	}
    return 0;
}