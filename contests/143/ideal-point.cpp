#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
	int n, k; cin >> n >> k;
	bool mn = false, mx = false;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x == k)
			mn = true;
		if (y == k)
			mx = true;
	}
	if (mn && mx)
		cout << YESn;
	else
		cout << NOn;
}
 
signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
