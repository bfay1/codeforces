#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;
const int maxn = LLONG_MAX;

signed main()
{
    int n, x, ans = 0;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    vector<int> dp(x + 1);

    for (auto& [h, s] : a) {
	cin >> h;
    }
    for (auto& [h, s] : a) {
	cin >> s;
    }

    for (const auto& [h, s] : a) {
	for (int i = x - h; i >= 0; i--) {
	    dp[i + h] = max(dp[i + h], dp[i] + s);
	    ans = max(ans, dp[i + h]);
	}
    }

    cout << ans << "\n";
}
