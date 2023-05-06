#include <bits/stdc++.h>
using namespace std;
#define int long long
 
#define MAXN 5005
 
int dp[MAXN][MAXN];
int coins[MAXN];
int prefix[MAXN];
 
signed main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> coins[i];
		prefix[i + 1] = prefix[i] + coins[i];
	}

	function <int(int, int)> sum = [&] (int l, int r) {
		return prefix[r + 1] - prefix[l - 1];
	};
 
	for (int i = 0; i < n; i++)
		dp[i][i] = coins[i];
 
	for (int k = 1; k < n; k++) {
		for (int i = 0; i < n - k; i++) {
			dp[i][i + k] = sum(i, i + k)
						 - min(dp[i + 1][i + k], dp[i][i + k - 1]);
		}
	}
 
	cout << dp[0][n - 1] << "\n";
 
}









