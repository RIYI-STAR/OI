#include <iostream>
#include <cmath>
using namespace std;

int sum(int a, int b, int c){
    float p = (a+b+c)/2;
    float S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f", S);
	cout << endl;
    return 0;
}

int main(){
    int a,b,c;
    while(cin >> a >> b >> c){
        sum(a ,b ,c);
    }
    return 0;
}