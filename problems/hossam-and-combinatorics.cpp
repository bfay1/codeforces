#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n; cin >> n;
	vector<int> a(n);
	int mx = INT_MIN, mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mx = max(a[i], mx);
		mn = min(a[i], mn);
	}
	if (mx == mn)
		cout << n*(n - 1) << "\n";
	else
		cout << 2*count(a.begin(), a.end(), mx)*count(a.begin(), a.end(), mn) << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}

