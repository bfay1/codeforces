#include <bits/stdc++.h>
using namespace std;
#define int long long

int dp[100005];

int hsb(int x)
{
	int ret = 0;
	while (x >>= 1)
		ret++;
	return ret;
}

void solve()
{
	int n;
	cin >> n;
	if (n % 2 == 0 || hsb(n) >  40) {
		cout << -1 << "\n";
		return;
	}
	for (int i = 1; i < n / 2 + 5; i++) {
		dp[2*i - 1] = 1;
		dp[2*i + 1] = 2;
	}
	int i = n;
	while (i > 1) {
		dp[i] *= -1;	
		if (dp[i] == -1)
			i = (i + 1) / 2;
		else
			i = (i - 1) / 2;
	}

	for (int i = 1; i <= n; i++) {
		if (dp[i] < 0)
			cout << -dp[i] << " \n"[i == n - 1];
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}

