#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int mn = INT_MAX;
    int mx = INT_MIN;
    vector<int> a(n);

    for (auto& x : a) {
	cin >> x;
	mn = min(mn, x);
	mx = max(mx, x);
    }

    cout << (mn ? mn : mx) << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
