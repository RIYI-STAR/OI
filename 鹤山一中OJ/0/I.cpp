#include <iostream>
using namespace std; 

int main(){
    int y;
    cin >> y;
    if(y<=3000){
        if(!y%4){
            cout << "Yes";
        }else{
            cout << "No";
        }
    }
}