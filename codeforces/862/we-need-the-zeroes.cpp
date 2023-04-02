#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	int ans = accumulate(a.begin(), a.end(), 0, bit_xor<int>());
	int c = 0;
	
	for (int i = 0; i < n; i++)
		c ^= (ans ^ a[i]);
	
	if (c)
		ans = -1;
	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
