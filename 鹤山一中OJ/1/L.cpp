#include <iostream>
using namespace std; 

int sum(int s){
	if(s<60 && s>=0){
		return 4;
	}else if(s>=60 && s<=100){
		return (99-s)/10;
	}
}
 
int main()
{
	char l[5] = {'A','B','C','D','E'};
	int s;
	while(cin >> s){
	    cout << l[sum(s)] << endl;
	}
	return 0;
}