// P1328 [NOIP 2014 提高组] 生活大爆炸版石头剪刀布
#include <iostream>
using namespace std;

int main() {
    int N,Na,Nb;
    cin >> N >> Na >> Nb;   
    int a[Na],b[Nb];
    int Ca = 0, Cb = 0;
    for(int i=0;i<Na;i++) cin >> a[i];
    for(int i=0;i<Nb;i++) cin >> b[i];
    for(int i=0;i<N;i++){
        int aa = a[i%Na];
        int bb = b[i%Nb];
        if (aa!=bb){
            if (aa==0){
                if (bb==2 || bb==3) Ca++;
                else Cb++;
            }
            if (aa==1){
                if (bb==0 || bb==3) Ca++;
                else Cb++;
            }
            if (aa==2){
                if (bb==1 || bb==4) Ca++;
                else Cb++;
            }
            if (aa==3){
                if (bb==2 || bb==4) Ca++;
                else Cb++;
            }
            if (aa==4){
                if (bb==0 || bb==1) Ca++;
                else Cb++;
            }
            
        }
    }
    cout << Ca << " " << Cb << endl;
    return 0;
}
