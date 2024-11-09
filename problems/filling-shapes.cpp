/*
ID: jbrenda1
LANG: C++
TASK: skidesign
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	cin >> n;
	if (n & 1) {
		cout << 0 << "\n";
		return 0;
	}
	vector<int> dp(n + 1, 1);
	for (int i = 2; i <= n; i += 2)
		dp[i] = 2*dp[i - 2];
	cout << dp[n] << "\n";
}
