#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
	int n, q;
	cin >> n >> q;
	int dp[1005][1005];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			char x;
			cin >> x;
			dp[i][j] = dp[i - 1][j] - dp[i - 1][j - 1] + dp[i][j - 1] + (x == '*');
		}
	}
	while (q--) {
		int y1, x1, y2, x2;
		cin >> y1 >> x1 >> y2 >> x2;
		cout << dp[y2][x2] - dp[y2][x1 - 1] - dp[y1 - 1][x2] + dp[y1 - 1][x1 - 1] << "\n";
	}
}
