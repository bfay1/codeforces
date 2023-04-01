#include <bits/stdc++.h>
using namespace std;
#define int long long

#define MAXN 1000005
#define MAXM 105
#define MOD 1000000007

int dp[MAXN][2];

signed main()
{
	dp[1][0] = dp[1][1] = 1;
	for (int i = 2; i < MAXN; i++) {
		dp[i][0] = 4*dp[i - 1][0] + dp[i - 1][1];
		dp[i][1] = 2*dp[i - 1][1] + dp[i - 1][0];
		dp[i][0] %= MOD;
		dp[i][1] %= MOD;
	}

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		cout << (dp[n][0] + dp[n][1]) % MOD << "\n";
	}
}
