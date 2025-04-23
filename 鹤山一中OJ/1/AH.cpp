#include <iostream>
#include <string> 
using namespace std;

int main(){
	double i;double j;
	while(cin>>i>>j){
		cout << j << '*' << i << '=' << j*i;
		cout << endl;
	}
}