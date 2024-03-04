#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 998244353;

void solve()
{
	int n, k, mn = 0, mx = 0, x, y;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (x == k)
			mn = 1;
		if (y == k)
			mx = 1;
	}
	cout << (mn & mx ? "YES\n" : "NO\n");
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
