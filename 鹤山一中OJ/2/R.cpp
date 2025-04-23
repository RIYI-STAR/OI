#include <iostream>
#include <string>
using namespace std;

int main(){
	char s;
	while(cin>>s){
		
		if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')cout << "Vowel";
		else cout << "Consonant";
		
		cout << endl;
	}
}