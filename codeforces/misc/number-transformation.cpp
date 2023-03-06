#include <bits/stdc++.h>
using namespace std;
#define int long long
#define print(a) { for (int i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1]; return 0; }

void solve()
{
	int x, y; cin >> x >> y;
	if (y % x)
		cout << 0 << " " << 0 << "\n";
	else
		cout << 1 << " " << y / x << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}

