#include <bits/stdc++.h>
using namespace std;
long long aset[1000001], bset[1000001];
int main() {
	long long n; cin >> n;
	long long gs = n*(n + 1) / 2;
	if (gs & 1) {
		cout << "NO\n";
		return 0;
	} 
	cout << "YES\n";
	long long a = 0, b = 0;
	long long max_unused = n;
	long long act = 0, bct = 0;
	while (a + b != gs) {
		if (a < b) {
			a += max_unused;
			aset[max_unused] = 1;
			max_unused--;
			act++;
 
		} else {
			b += max_unused;
			bset[max_unused] = 1;
			max_unused--;
			bct++;
		}
	}
	cout << act << "\n";
	for (long long i = n; i > 0; i--) {
		if (aset[i] == 1) cout << i << " ";
	}
	cout << "\n" << bct << "\n";
	for (long long i = n; i > 0; i--) {
		if (bset[i] == 1) cout << i << " ";
	}
	cout << "\n";
	return 0;
}
