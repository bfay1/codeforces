#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, ans = LLONG_MAX;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) {
	cin >> x;
    }
    for (int i = 0; i < n - 1; i++) {
	ans = min(ans, a[i + 1] - a[i]);
    }
    if (ans < 0) {
	cout << "0\n";
    } else {
	cout << ans / 2  + 1 << "\n";
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
