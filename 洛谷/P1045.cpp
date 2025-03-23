// P1045 [NOIP 2003 普及组] 麦森数
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int P;
    cin >> P;
    
    vector<long long int> result(1000, 0);
    result[499]=1;

    vector<long long int> b(1000, 0);
    b[499] = 2;
    
    cout << (int)(log10(2)*P)+1 << endl;

    while(P>0){
    
        if(P&1) {
            vector<long long int> temp(1000, 0);
            for(int i=499;i>=0;i--){
                for(int j=499;j>=0;j--){
                    if (i+j>=499){
                        temp[i+j-499] += result[i]*b[j];
                    }
            }
            for(int i=499;i>0;i--)
                if(temp[i]>=10){
                    temp[i-1]+=temp[i]/10;
                    temp[i]%=10;
                }
            }
            result = temp;
        }
            
        vector<long long int> temp(1000, 0);
        for(int i=499;i>=0;i--)
            for(int j=499;j>=0;j--){
                if (i+j>=499) temp[i+j-499] += b[i]*b[j];
            }
        for(int i=499;i>0;i--)
            if(temp[i]>=10){
                temp[i-1]+=temp[i]/10;
                temp[i]%=10;
            }
        b = temp;
        P>>=1;
    }

    result[499]--;



    for (int i = 0; i < 500; i+=50) {
        for (int j = i; j < i+50; j++) 
            cout << result[j];
        cout << endl;
    }
}

