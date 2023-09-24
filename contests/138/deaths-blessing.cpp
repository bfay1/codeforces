#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n; cin >> n;
	vector<long long> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int l = 0, r = n - 1; 
	long long mintime = 0;
	while (l < r) {
		if (b[l] < b[r]) {
			mintime += a[l];
			a[l + 1] += b[l];
			l++;
		} else {
			mintime += a[r];
			a[r - 1] += b[r];
			r--;
		}
	}
	mintime += a[r];
	cout << mintime << "\n";
}
int main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
