#include<iostream>
using namespace std;
bool solve[1000001];
int n_max = 1000000;
void sang() {
	for (int i = 0; i <= n_max; i++) {
		solve[i] = true;
	}
	solve[0] = solve[1] = false;
	for (int i = 2; i <= sqrt(n_max); i++) {
		if (solve[i]) {
			for (int j = i * i; j <= n_max; j += i) {
				solve[j] = false;
			}
		}
	}
}
void sang(int l,int r){
    int *prime=new int[r-l+1];
    for(int i=0;i<=r-l;i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2;i<=sqrt(r);i++){
        for(int j=max(i*i,(l+i-1)/i*i);j<=r;j+=i){
            prime[j-l]=0;
        }
    }
    for(int i=max(2,l);i<=r;i++){
        if(prime[i-l])cout<<i<<" ";
    }
}
int main() {
	// sang so nguyen to
	sang();
	for (int i = 0; i <= 1000; i++) {
		if (solve[i])cout << i << " ";
	}
	return 0;
}
