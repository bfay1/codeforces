#include <bits/stdc++.h>
using namespace std;
#define int long long

#define mod 1000000007

signed main()
{
	int n;
	cin >> n;
	vector<vector<char>> g(n, vector<char>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> g[i][j];
	vector<vector<int>> dp(n, vector<int>(n));
	bool row = true, col = true;
	for (int i = 0; i < n; i++) {
		if (col && g[i][0] == '.')
			dp[i][0] = 1;
		else
			col = false;
		if (row && g[0][i] == '.')
			dp[0][i] = 1;
		else
			row = false;
	}
	for (int i = 1; i < n; i++) 
		for (int j = 1; j < n; j++)
			if (g[i][j] == '.')
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1] % mod;

	cout << dp[n - 1][n - 1] % mod << "\n";
}
