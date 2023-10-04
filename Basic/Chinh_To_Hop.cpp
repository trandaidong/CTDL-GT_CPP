/*
  Tổ hợp: Ckn=n!/k!(n-k)!=n(n-1)(n-2)...(n-k+1)/n!
  Chỉnh hợp:  Akn=n!/(n-k)!=n(n-1)(n-2)..(n-k+1) //Có tính thứ tự
  Chỉnh hợp lặp:   n!/m1!.m2!...mk!  //Chia n vào k ô
*/
#include <iostream>
using namespace std;

long long nCk(int k,int n){
    long long res=1;
    for(int i=0;i<k;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
long long nAk(int k,int n){
    long long res=1;
    for(int i=0;i<k;i++){
        res*=(n-i);
    }
    return res;
}
int main() {
    cout << nAk(3,10);
    return 0;
}
