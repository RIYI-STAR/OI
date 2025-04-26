#include <iostream>
using namespace std; 

int sum(int s){
	return (s+1)*s/2;
}
 
int main()
{
	int s;
	while(cin >> s){
	    cout << sum(s) << endl;
	}
	return 0;
}