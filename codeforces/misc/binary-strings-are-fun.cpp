#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 998244353;

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	s = " " + s;

	int ans = 0;
	int cur = 1;

	for (int i = 1; i <= n; i++) {
		if (s[i] == s[i - 1])
			cur = 2*cur % mod;
		else
			cur = 1;
		ans = (ans + cur) % mod;
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





















