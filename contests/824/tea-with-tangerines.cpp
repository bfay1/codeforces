#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int m = 10000000;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			m = min(m, a[i]);
		}
		m = 2*m - 1;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > m) {
				ans += (a[i] / m);
				if (a[i] % m == 0) ans--;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
