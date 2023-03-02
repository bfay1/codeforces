#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, g, i; 
	string ans;
	cin >> n;
	vector<int> a(n);
	for (i = 1; i < n; i++)
		cin >> a[i];
	ans = "YES\n";
	g = a[0];
	sort(a.begin(), a.end());
	for (i = 1; i < n; i++) {
		g = gcd(g, a[i]);
		if (g > i + 1)
			ans = "NO\n";
	}
	cout << ans;
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
