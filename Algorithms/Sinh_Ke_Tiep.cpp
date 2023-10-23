#include<iostream>
using namespace std;
int A[100] = { 0 };
void BinaryBirth(int n) {
	bool ok = false;
	while (ok!=true) {
		for (int i = 1; i <= n; i++)cout << A[i];
		cout << endl;
		int i = n;
		while (i >= 1 && A[i] == 1) {
			A[i] = 0;
			--i;
		}
		A[i] = 1;
		if (i < 1)ok = true;
	}
}
int main() {
	int n; cin >> n;
	BinaryBirth(n);
	return 0;
}
