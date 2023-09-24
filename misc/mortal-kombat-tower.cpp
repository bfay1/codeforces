#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

const int mod = 1e9 + 7;
const int maxn = INT_MAX;
const int minn = INT_MIN;
const int MAX = LLONG_MAX;
const int MIN = LLONG_MIN;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> dp(n + 1, {maxn, maxn});

    for (auto& x : a) {
	cin >> x;
    }

    dp[0][true] = 0;

    for (int i = 0; i < n; i++) {
	for (int turn = 0; turn < 2; turn++) {
	    for (int j = 1; j <= min(n - i, 2LL); j++) {
		int move = a[i] + (j == 2 ? a[i + 1] : 0LL);
		dp[i + j][1 - turn] = min(dp[i + j][1 - turn], dp[i][turn] + move*turn);
	    }
	}
    }

    cout << min(dp[n][false], dp[n][true]) << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
