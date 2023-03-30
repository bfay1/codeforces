#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, x;
	cin >> n >> x;
	vector<int> h(n);
	vector<int> s(n);
	for (auto& x : h)
		cin >> x;
	for (auto& x : s)
		cin >> x;
	
	vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
	
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= x; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= h[i - 1])
				dp[i][j] = max(dp[i][j], dp[i - 1][j - h[i - 1]] + s[i - 1]);
		}
	}
	cout << dp[n][x] << "\n";	
}			
