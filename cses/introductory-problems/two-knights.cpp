#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int k; cin >> k;
	cout << 0 << "\n";
	for (int i = 2; i <= k; i++) {
		cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << "\n";
	}
	return 0;
}
