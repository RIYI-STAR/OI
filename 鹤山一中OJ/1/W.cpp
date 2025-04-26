#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x1,y1,x2,y2;
	while(cin>>x1>>y1>>x2>>y2){
		if(x1==x2)printf("y=%.1f",(y1+y2)/2);
		else if(y1==y2)printf("x=%.1f",(x1+x2)/2);
		else {
			double b_k = (y2-y1)/(x2-x1);
			double b_b = y1 - b_k * x1;
			
			double m_x = (x1+x2)/2;
			double m_y = b_k * m_x + b_b;
			
			double a_k = -1.0 / b_k;
			double a_b = m_y - a_k * m_x;
			
			
			if(a_k==1)printf("y=x");
			else printf("y=%.1fx",a_k);
			
			if(a_b>0)printf("+%.1f",a_b);
			else if(a_b<0)printf("%.1f",a_b);
			
		}
		cout << endl;
	}
}