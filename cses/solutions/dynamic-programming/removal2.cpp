#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
	int n;
	cin >> n;
	vector<int> coins(n);
	vector<vector<int>> dp(n, vector<int>(n));
	int sum = 0;

	for (auto& x : coins) {
		cin >> x;
		sum += x;
	}
 
	for (int i = n - 1; i >= 0; i--)
		for (int j = i; j < n; j++)
			if (i == j)
				dp[i][j] = i == j ? coins[i] : dp[i][j] = max(coins[i] - dp[i + 1][j], coins[j] - dp[i][j - 1]);

	cout << (sum + dp[0][n - 1]) / 2 << "\n";
 
}









