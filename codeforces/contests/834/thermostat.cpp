#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int l, r, x, a, b;
	cin >> l >> r >> x >> a >> b;
	if (a == b) {
		cout << 0 << "\n";
		return;
	}
	if (b < l || b > r || (abs(a - l) < x && abs(a - r) < x) || (abs(b - l) < x && abs(b - r) < x)) {
		cout << -1 << "\n";
		return;
	}
	if (abs(a - b) >= x) {
		cout << 1 << "\n";
		return;
	}
	if ((abs(a - r) >= x && abs(b - r) >= x) || (abs(a - l) >= x && abs(b - l) >= x)) {
		cout << 2 << "\n";
		return;
	}
	cout << 3 << "\n";
	return;
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
