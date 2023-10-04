//Công thức Legendre là biểu thức tính số mũ của lũy thừa lớn nhất của số nguyên tố p mà là ước của n!
#include <iostream>
using namespace std;

int legendre1(int n,int k){
    int count=0;
    for(int i=k;i<=n;i+=k){
        int m=i;
        while(m%k==0){
            count++;
            m/=k;
        }
    }
    return count;
}
int legendre2(int n,int k){
    int ans=0;
    for(int i=k;i<=n;i*=k){
        ans+=n/i;
    }
    return ans;
}
int main() {
    cout << legendre2(10,3);
    return 0;
}
