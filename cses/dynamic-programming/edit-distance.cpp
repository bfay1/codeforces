#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	string s;
	string t;
	cin >> s >> t;
	int n = s.size();
	int m = t.size();
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
	dp[0][0] = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (i*j == 0)
				dp[i][j] = i ? i : j;
			else if (s[i - 1] == t[j - 1])
				dp[i][j] = dp[i - 1][j - 1];
			else
				dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
		}
	}
	cout << dp[n][m] << "\n";
}
