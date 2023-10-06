/*
* Phi hàm euler: đếm số lượng các số nguyên tố cùng n
*   phi(n)=n*(1-1/p) // p là các số nguyên tố của n
*/
#include <iostream>
#include<cmath>
using namespace std;
int euler(long long n){
    long long res=n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            res-=res/i;
            while(n%i==0)n/=i;
        }
    }
    if(n>1)res-=res/n;
    return res;
}
int phi[1000001];
void sang_euler(){
    for(int i=1;i<=1000000;i++){
        phi[i]=i;
    }
    for(int i=2;i<=1000000;i++){
        if(phi[i]==i){
            phi[i]-=1;
            for(int j=i*2;j<=1000000;j+=i){
                phi[j]-=phi[j]/i;
            }
        }
    }
}

int main()
{
    sang_euler();
    for(int i=1;i<=100;i++){
        cout<<phi[i]<<" ";
    }
    return 0;
}
