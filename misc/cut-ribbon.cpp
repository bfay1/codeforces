#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int x[3] = {a, b, c};
	sort(x, x + 3);
	vector<int> dp(n + 1, INT_MIN);
	dp[0] = 0;
	for (int i = a; i <= n; i++)
		dp[i] = max(dp[i], dp[i - a] + 1);
	for (int i = b; i <= n; i++)
		dp[i] = max(dp[i], dp[i - b] + 1);
	for (int i = c; i <= n; i++)
		dp[i] = max(dp[i], dp[i - c] + 1);
	cout << dp[n] << "\n";
}
