#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	int ans = n - 1;
	for (int i = 0; i < n - 2; i++)
		if (s[i] == s[i + 2])
			ans--;
	cout << ans << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
