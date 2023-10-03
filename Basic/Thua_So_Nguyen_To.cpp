#include<iostream>
using namespace std;
using ll = long long;
const int MOD = 1000000007; // 10^9+7
/*
* (A + B) % C = [(A % C) + (B % C)] % C
* (A - B) % C = [(A % C) - (B % C) + C ] % C (cộng thêm C để không bị âm khi trừ)
* (A * B) % C = [(A % C) * (B % C)] % C
* (A ^ B) % C = (A % C) ^ B % C
* (A / B) % C = (A % C * B^(-1)) % C 
*/
//#define ll long long
//typedef long long ll;
void PhanTich(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			cout << i << " ";
			n /= i;
		}
	}
	if (n > 1)cout << n << " " << endl;
}
// tính số lượng ước của một số: d(n)=(l1+1)(l2+1)....(ln+1)
// tính tích các ước của một số: u(n)=pow(n,d(n)/2)

long long gcd(int a, int b) {
	if (b == 0)return a;
	return gcd(b, a % b);	
}
long long lcm(int a, int b) {
	return a / gcd(a, b) * b;
}
int main() {
	int n; cin >> n;
	PhanTich(n);
	return 0;
}
