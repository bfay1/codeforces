#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, ans = 0, l = 1, r = 1;
    cin >> n;

    while (r <= 100) {
	if (n % r) {
	    l = r + 1;
	}
	ans = max(ans, r - l + 1);
	r++;
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
