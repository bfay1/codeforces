#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mi = -1;
    for (auto& x : a) {
	cin >> x;
	mi &= x;
    }
    if (mi) {
	cout << "1\n";
	return;
    }

    int cur = -1, ans = 0;
    for (const auto& x : a) {
	cur &= x;
	if (cur == 0) {
	    ans++;
	    cur = -1;
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





