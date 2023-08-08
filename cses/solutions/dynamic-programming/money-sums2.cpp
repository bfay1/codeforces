#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;
const int maxn = LLONG_MAX;

signed main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);

    for (auto& x : a) {
	cin >> x;
	sum += x;
    }

    vector<int> dp(sum + 1);
    dp[0] = true;

    sort(a.begin(), a.end());

    for (const auto& x : a) {
	for (int i = sum; i > 0; i--) {
	    if (x <= i && dp[i - x]) {
		dp[i] = true;
	    }
	}
    }

    cout << count(dp.begin(), dp.end(), true) - 1 << "\n";

    for (int i = 1; i <= sum; i++) {
	if (dp[i]) {
	    cout << i << " \n"[i == sum];
	}
    }
}
