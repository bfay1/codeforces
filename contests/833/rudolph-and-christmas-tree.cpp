#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    double d, h;

    auto area = [&] (double y) {
	return (y / h)*(y / h) * (h*d/2.0);
    };

    cin >> n >> d >> h;

    vector<pair<double, double>> trees(n);

    for (auto& [x, y] : trees) {
	cin >> x;
	y = x + h;
    }

    sort(trees.begin(), trees.end());

    double ans = n*d*h/2;

    for (int i = 0; i < n - 1; i++) {
	const auto& [a, b] = trees[i];
	const auto& [c, d] = trees[i + 1];
	if (c < b) {
	    ans -= area(c - b);
	}
    }

    cout << ans << "\n";

}

signed main()
{
    int t;
    cin >> t;
    cout << fixed << setprecision(20);

    while (t--) {
	solve();
    }
}



