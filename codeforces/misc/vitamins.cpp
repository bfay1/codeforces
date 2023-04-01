#include <bits/stdc++.h>
using namespace std;
#define int long long

int get_mask(string s)
{
	int ret = 0;
	for (auto c : s) {
		int bit = c - 'A';
		ret |= (1 << bit);
	}
	return ret;
}

signed main()
{
	int n;
	cin >> n;
	int dp[n + 1][8];

	int inf = 1e17;
	int ans = inf;

	for (int i = 0; i <= n; i++)
		for (int j = 0; j < 8; j++)
			dp[i][j] = inf;
	
	dp[0][0] = 0;

	for (int i = 0; i < n; i++) {
		int cost;
		string s;
		cin >> cost >> s;
		int mask = get_mask(s);

		for (int j = 0; j < 8; j++) {
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			dp[i + 1][j | mask] = min(dp[i + 1][j | mask], dp[i][j] + cost);
		}
	}

	ans = dp[n][7] == inf ? -1 : dp[n][7];
	cout << ans << "\n";
}

