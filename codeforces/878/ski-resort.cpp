#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (auto& x : a)
	cin >> x;

    int l = 0, r = 0;
    int len = 0;
    vector<int> intervals;

    for (int i = 0; i < n; i++) {
	if (q < a[i]) {
	    if (k <= len)
		intervals.push_back(len);
	    len = 0;
	} else {
	    len++;
	}
	
    }

    if (k <= len)
	intervals.push_back(len);

    int ans = 0;

    for (auto x : intervals) {
	ans += (x - k + 1)*(x - k + 2)/2;
    }

    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
