#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"

const int mod = 1e9 + 7;

int main()
{
	int n;
	cin >> n;
	int x = n*(n + 1)/4;
	vector<vector<int>> dp(n, vector<int>(x + 1));
	dp[0][0] = 1;

	if (n*(n + 1) % 4)
		return cout << "0\n", 0;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= x; j++) {
            dp[i][j] = dp[i - 1][j];
            if (i <= j)
                dp[i][j] += dp[i - 1][j - i];
            dp[i][j] %= mod;
		}
	}

	cout << dp[n - 1][x] << "\n";
}
