#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n, m; cin >> n >> m;
	cout << max(1LL, (n*m + 2) / 3) << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
