#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, k = 0, ans = 0;
	cin >> n;
	vector<int> a(n);
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == 0)
			k++;
		else {
			pq.push(a[i]);
			while (pq.size() > k)
				pq.pop();
		}
	}
	while (!pq.empty()) {
		ans += pq.top();
		pq.pop();
	}
	cout << ans << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
