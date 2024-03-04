#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, ans = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
	int x;
	cin >> x;
	if (x == i) {
	    ans++;
	}
    }

    cout << (ans + 1) / 2 << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
