#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int mn = INT_MAX;
    int mx = INT_MIN;
    while (n--) {
	int x;
	cin >> x;
	mn = min(mn, x);
	mx = max(mx, x);
    }

    if (mn < 0)
	cout << mn << "\n";
    else
	cout << mx << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
