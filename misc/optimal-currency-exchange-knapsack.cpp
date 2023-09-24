#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, d, e;
	cin >> n >> d >> e;
	vector<int> coins = { d, d * 2, d * 5, d * 10, d * 20, d * 50, d * 100, e * 5, e * 10, e * 20, e * 50, e * 100, e * 200 };
	vector<int> dp(n + 1, n);
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = i;		
		for (auto c : coins) {
			if (i >= c) {
				dp[i] = min(dp[i], dp[i - c]);
			}
		}
	}

	cout << dp[n] << "\n"; 
}
