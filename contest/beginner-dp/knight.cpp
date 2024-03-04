#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ifstream fin("knight.in");
    ofstream fout("knight.out");

    int n, m;
    fin >> n >> m;
    vector<vector<int>> dp(n,  vector<int>(m));

    dp[0][0] = 1;

    auto valid = [&] (int i, int j) {
	return i >= 0 && j >= 0 && i < n && j < m;
    };

    for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
	    int add = 0;
	    if (valid(i - 1, j - 2))
		add += dp[i - 1][j - 2];
	    if (valid(i - 2, j - 1))
		add += dp[i - 2][j - 1];
	    dp[i][j] = max(dp[i][j], add);
	}
    }

    fout << dp[n - 1][m - 1] << "\n";
}
