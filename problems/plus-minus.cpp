#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 998244353;

void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c)
		cout << "+\n";
	else
		cout << "-\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
