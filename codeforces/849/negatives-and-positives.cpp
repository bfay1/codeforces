#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n; cin >> n;
	int ans = 0;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		pq.push(x);
		ans += x;
	}
	while (pq.size() > 1) {
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		if (a + b < 0) {
			ans += 2 * abs(a + b);
		}	
	}
	cout << ans << "\n";
}
 
signed main() {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
