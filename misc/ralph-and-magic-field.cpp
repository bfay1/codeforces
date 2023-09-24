#include <bits/stdc++.h>
using namespace std;
#define int long long

#define MOD 1000000007

signed main()
{
	int n, m, k;
	cin >> n >> m >> k;
	if (k == -1 && n % 2 != m % 2) {
		cout << 0 << "\n";
	} else {
		n--;
		m--;
		n %= MOD - 1;
		m %= MOD - 1;
		int x = 2;
		int b = n*m;
		int ans = 1;
		while (b) {
			if (b & 1)
				ans = ans * x % MOD;
			x = x * x % MOD;
			b >>= 1;
		}
		cout << ans << "\n";
	}
}			
