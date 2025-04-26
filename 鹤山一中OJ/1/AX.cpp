#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		for(int i=0;i<s.length()-1;i++){
//			cout << s[i] << ' ' << s[i+1] << endl;
			if(s[i]>s[i+1]){
				char a = s[i];
				s[i]=s[i+1];
				s[i+1]=a;
			}
		}
		cout << s << endl;
	}
}