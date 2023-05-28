#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), fa(2*n + 1), fb(2*n + 1);

    int cur = 1;

    for (int i = 0; i < n; i++) {
	cin >> a[i];
	if (i == 0) {
	    continue;
	} else if (a[i] == a[i - 1]) {
	    cur++;
	} else {
	    fa[a[i - 1]] = max(fa[a[i - 1]], cur);
	    cur = 1;
	}
    }

    fa[a.back()] = max(fa[a.back()], cur);
    cur = 1;

    for (int i = 0; i < n; i++) {
	cin >> b[i];
	if (i == 0) {
	    continue;
	} else if (b[i] == b[i - 1]) {
	    cur++;
	} else {
	    fb[b[i - 1]] = max(fb[b[i - 1]], cur);
	    cur = 1;
	}
    }

    fb[b.back()] = max(fb[b.back()], cur);

    int ans = 0;
 
    for (int i = 1; i <= 2*n; i++)
	ans = max(ans, fa[i] + fb[i]);

    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
