#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

void solve()
{
    int n, k, ans = LLONG_MAX;
    cin >> n >> k;
    vector<pair<int, int>> gaps(k, {LLONG_MIN, LLONG_MIN});
    vector<int> last(k, -1);

    for (int i = 0; i < n; i++) {

	int c;
	cin >> c;
	int diff = i - last[--c] - 1;

	last[c] = i;
	auto [mi, mx] = gaps[c];

	if (mx < diff) {
	    gaps[c] = {mx, diff};
	} else if (mi < diff) {
	    gaps[c] = {diff, mx};
	}
    }

    for (int c = 0; c < k; c++) {
	int diff = n - last[c] - 1;
	auto [mi, mx] = gaps[c];

	if (mx < diff) {
	    gaps[c] = {mx, diff};
	} else if (mi < diff) {
	    gaps[c] = {diff, mx};
	}
    }

    int i = 0;
    for (auto& [mi, mx] : gaps) {
	ans = min(ans, max(mi == LLONG_MIN ? LLONG_MAX : mi, mx == LLONG_MIN ? LLONG_MAX : mx / 2));
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





