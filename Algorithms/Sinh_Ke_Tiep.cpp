#include<iostream>
#include<algorithm>
using namespace std;
// Sinh sâu nhị phân
// duyệt từ cuối thấy bit 1->0 đến bit 0 -> 1 rồi dừng
int A[100] = { 0 };
void BinaryBirth(int n) {
	bool ok = false;
	while (ok != true) {
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
// Sinh tổ hợp: không trùng nhau 
// Duyệt từ cuối nếu vị trí đó chưa max -> ++, tất cả vị trí sau tăng ++ gia trị trước
int B[100];
void CombinationBirth(int k, int n) {
	for (int i = 1; i <= k; i++) {
		B[i] = i;
	}
	bool ok = true;
	while (ok) {
		for (int i = 1; i <= k; i++) {
			cout << B[i];
		}
		cout << endl;
		int i = k;
		while (i >= 1 && B[i] == n - k + i) {
			--i;
		}
		if (i == 0)ok = false;
		else {
			B[i]++;
			for (int j = i + 1; j <= k; j++) {
				B[j] = B[j - 1] + 1;
			}
		}
	}
}
// Sinh hoán vị
// Duyệt từ cuối tìm vị trí đằng trước bé hơn đằng sau (tìm hoán vị lớn hơn) swap với thằng lớn hơn mà bé nhất, sau đó sort ascending
int C[100];
void PermutationBirth(int n) {
	for (int i = 1; i <= n; i++) {
		C[i] = i;
	}
	bool ok = true;
	while (ok) {
		for (int i = 1; i <= n; i++) {
			cout << C[i];
		}
		cout << endl;
		int i = n - 1;
		while (i >= 1 && C[i + 1] < C[i]) {
			--i;
		}
		if (i == 0)ok = false;
		else {
			int j = n;
			while (C[j] < C[i])--j;
			swap(C[i], C[j]);
			reverse(C + i + 1, C + n + 1);
		}
	}
}
int main() {
	int n, k; cin /*>> k*/ >> n;
	//BinaryBirth(n);
	//CombinationBirth(k, n);
	PermutationBirth(n);
	return 0;
}
