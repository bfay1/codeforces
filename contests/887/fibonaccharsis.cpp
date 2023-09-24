#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
	int a = i, b = n;
	bool valid = true;
	for (int j = 0; j < k - 2; j++) {
	    int tmp = a;
	    a = b - a;
	    b = tmp;
	    valid &= a <= b && 0 <= min(a, b);
	    if (!valid) {
		break;
	    }
	}
	ans += valid;
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
