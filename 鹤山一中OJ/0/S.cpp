#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<49;i++){
        for(int j=1;j<49;j++){
            if(i+j==49&&2*i+4*j==100){
                cout << "ji=" << i << ",tu=" << j << endl;
            }
        }
    }
    return 0;
}