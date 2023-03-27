#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
long long dp[1000001];

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);

	int n; cin >> n;
	dp[0] = 0, dp[1] = 1, dp[2] = 2, dp[3] = 4, dp[4] = 8, dp[5] = 16, dp[6] = 32;
	
	if (n <= 6) {
		cout << dp[n];
		return 0;
	}
	
	for (int i = 7; i <= n; i++) {
		dp[i] = ((dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6]) % mod);
	}
	
	cout << dp[n];
}
