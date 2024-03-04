#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a)
	cin >> x;
    for (int i = 0; i < n - 1; i++) {
	if (a[i + 1] < a[i])
	    ans = max(ans, a[i]);
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
