#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 100005
#define MOD 1000000007

int dp[MAXN];

signed main()
{
	string s;
	cin >> s;
	int ans = 1, n = s.size();
	char prev = s[0];

	if (s.find('m') != -1 || s.find('w') != -1)
		return cout << "0\n", 0;

	if (n == 1)
		return cout << "1\n", 0;

	int cur = s[0] == s[1];

	dp[0] = dp[1] = 1;

	for (int i = 2; i < MAXN; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;

	for (int i = 1; i < n; i++) {
		char c = s[i];
		if (c != prev) {
			if (cur > 1)
				ans *= dp[cur];
			ans %= MOD;
			cur = 0;
		}
		if (c == 'n' || c == 'u')
			cur++;
		prev = c;
	}
	if (cur > 1)
		ans *= dp[cur];
	ans %= MOD;
	if (ans == 0)
		ans = 1;
	cout << ans << "\n";
}
