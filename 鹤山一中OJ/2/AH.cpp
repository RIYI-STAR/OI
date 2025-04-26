#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n,a,k;
    while(cin>>n>>a>>k){
        int arr[n];  
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<=n;i++){  
            if(i==a)cout << k << ' ';  
            if(i<n)cout << arr[i] << ' '; 
        }
        cout << endl;
    }
    return 0;
}
