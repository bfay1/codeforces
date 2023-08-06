#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) {
	cin >> x;
    }

    if (is_sorted(a.begin(), a.end())) {
	cout << "0\n";
	return;
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
	if (a[i + 1] < a[i]) {
	    ans = max(a[i], ans);
	}
    }

    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
