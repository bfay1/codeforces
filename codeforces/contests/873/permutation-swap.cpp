#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		ans = gcd(ans, abs(x - i));
	}

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}






















