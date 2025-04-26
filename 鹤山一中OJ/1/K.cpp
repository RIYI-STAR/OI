#include <iostream>
#include <string>
using namespace std;

int sum(int a){
	long long int r=1;
	for(int i=1;i<=a;i++){
		r*=i;
	}
	cout << r << endl;
	return 0;
}

int main()
{
	float m;
    while(cin >> m){
		sum(m);
	}
    return 0;
}