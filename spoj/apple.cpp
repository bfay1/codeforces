#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (auto& x : a)
	cin >> x;
    sort(a.begin(), a.end());

    vector<int>	dp(k + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= k; i++) {
	for (auto x : a) {
	    if (x > i)
		break;
	    if (x == -1)
		continue;
	    dp[i] = min(dp[i], dp[i - x] + x);
	}
    }

    cout << (dp[k] == INT_MAX ? -1 : dp[k]) << "\n";
}

signed main()
{
    int c;
    cin >> c;
    while (c--)
	solve();
}










