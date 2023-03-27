#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, x;
	cin >> n >> x;
	vector<int> dp(x + 1, 1000001);
	dp[0] = 0;
	vector<int> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	
	for (int i = 1; i <= x; i++) {
		for (auto coin : c) {
			if (coin <= i)
				dp[i] = min(dp[i], dp[i - coin]);
		}
		dp[i]++;
	}
	
	if (dp[x] < 1000001)
		cout << dp[x];
	else cout << -1;
	return 0;
}
