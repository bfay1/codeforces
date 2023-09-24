#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	string ans = "NO\n";
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (x <= i)
			ans = "YES\n";
	}
	cout << ans; 
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}

