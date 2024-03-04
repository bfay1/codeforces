#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{

	int a, b;
	cin >> a >> b;

	function <int(int)> f = [&] (int x) {
		return (a + x - 1) / x + (b + x - 1) / x + x - 1;
	};

	int l = 1, r = max(a, b);
	int ans = a + b;

	for (int i = 1; i <= 1000000; i++)
		ans = min(ans, f(i));

	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}





















