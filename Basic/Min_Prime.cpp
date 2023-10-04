#include <iostream>
#include<cmath>

using namespace std;
int min_prime[100001];
void sang(){
    for(int i=1;i<100001;i++){
        min_prime[i]=i;
    }
    for(int i=2;i<=sqrt(100000);i++){
        if(min_prime[i]==i){
            for(int j=i*i;j<=100000;j+=i){
                if(min_prime[j]==j){
                    min_prime[j]=i;
                }
            }
        }
    }
}
int check(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return i;
    }
    return n;
}
int main()
{
    sang();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=1;i<=n;i++){
            cout<<check(i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
