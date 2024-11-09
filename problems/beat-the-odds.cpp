#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n; cin >> n;
	int odd = 0, even = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a & 1)
			odd++;
		else
			even++;
	}
	cout << min(odd, even) << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
