#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n, m; cin >> n >> m;
	multiset<int> tickets;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		tickets.insert(x);
	}
	int c;
	while (m--) {
		cin >> c;
		auto it = tickets.upper_bound(c);
		if (it == tickets.begin()) {
			cout << -1 << "\n";
		} else {
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
}
