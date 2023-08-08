#include <bits/stdc++.h>
using namespace std;
#define int long long

#define MAX 505 
#define MOD 1000000007

int dp[MAX][MAX];
const int inf = 1e9;

signed main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) {
				dp[i][j] = 0;
			} else {
				dp[i][j] = inf;
				for (int k = 1; k < i; k++)
					dp[i][j] = min(dp[i][j], dp[i - k][j] + dp[k][j] + 1);
				for (int l = 1; l < j; l++)
					dp[i][j] = min(dp[i][j], dp[i][j - l] + dp[i][l] + 1);
			}
		}
	}

	cout << dp[m][n] << "\n";
}
