#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
 
int main()
{
	int n, x;
	std::cin >> n >> x;
	std::vector<int> a(n), dp(x + 1, 0);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= x; j++) {
			if (j - a[i] >= 0) {
				dp[j] += dp[j - a[i]];
				dp[j] %= mod;
			}
		}
	}
	 
	std::cout << dp[x] << "\n";
}
