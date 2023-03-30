#include <bits/stdc++.h>
using namespace std;
#define int long long

#define MOD 1000000007
#define MAXN 1000000

int dp[MAXN + 1];

signed main()
{
	int n;
	cin >> n;
	dp[1] = 1;
	for (int i = 2; i <= 6; i++)
		dp[i] = dp[i - 1] * 2;
	
	for (int i = 7; i <= n; i++)
		dp[i] = accumulate(dp + i - 6, dp + i, 0LL) % MOD;
	
	cout << dp[n] % MOD << "\n";
}			
