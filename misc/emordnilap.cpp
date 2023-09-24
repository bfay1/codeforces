#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 100001
const int mod = 1e9 + 7;

int fact[MAXN];

void solve()
{
	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += i;
		ans %= mod;
	}
	ans *= 2*fact[n];
	
	cout << ans % mod << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	fact[0] = fact[1] = 1;
	for (int i = 2; i < MAXN; i++)
		fact[i] = (i * fact[i - 1]) % mod;
	while (t--) solve();
}
