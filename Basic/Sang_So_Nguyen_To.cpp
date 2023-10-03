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
int main() {
	// sang so nguyen to
	sang();
	for (int i = 0; i <= 1000; i++) {
		if (solve[i])cout << i << " ";
	}
	return 0;
}
