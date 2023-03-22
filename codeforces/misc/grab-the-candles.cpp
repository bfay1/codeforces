#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 998244353;

void solve()
{
	int n; cin >> n;
	vector<int> a(n);
	int m = 0, b = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x & 1)
			b += x;
		else
			m += x;
	}
	
	if (m > b)
		cout << "YES\n";
	else
		cout << "NO\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
