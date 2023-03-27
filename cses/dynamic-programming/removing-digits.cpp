#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	cin >> n;
	vector<int> dp(n + 1, 1);
	for (int i = 10; i <= n; i++) {
		dp[i] = INT_MAX;
		string s = to_string(i);
		for (auto d : s)
			dp[i] = min(dp[i], dp[i - (d - '0')] + 1);
	}
	cout << dp[n] << "\n";
}
