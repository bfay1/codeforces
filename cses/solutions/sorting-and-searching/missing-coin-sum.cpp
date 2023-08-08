#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;

	sort(a.begin(), a.end());

	vector<int> dp(n + 1);
	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		if (dp[i - 1] < a[i - 1])
			return cout << dp[i - 1] << "\n", 0;
		dp[i] = dp[i - 1] + a[i - 1];
	}

	cout << dp[n] << "\n";
}






















