#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		for(int i=0;i<s.length();i++){
			if(!i)cout << (char)(s[i]+'A'-'a');
			else cout << s[i];
		}
		cout << endl;
	}
}