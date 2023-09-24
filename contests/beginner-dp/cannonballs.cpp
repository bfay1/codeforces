#include <bits/stdc++.h>
using namespace std;
#define int long long

const int maxn = 3e6;

signed main()
{
    int t, sum = 0;
    vector<int> a;

    for (int i = 1; 2*sum + i <= maxn; i++) {
	sum += i*(i + 1)/2;
	a.push_back(sum);
    }

    cin >> t;

    while (t--) {
	int x;
	cin >> x;
	vector<int> dp(x + 1, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i <= x; i++) {
	    for (const auto& j : a) {
		if (j <= i) {
		    dp[i] = min(dp[i], dp[i - j] + 1);
		}
	    }
	}
	cout << dp.back() << "\n";
    }
}
