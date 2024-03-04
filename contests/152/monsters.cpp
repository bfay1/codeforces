#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a;
    for (int i = 1; i <= n; i++) {
	int x;
	cin >> x;
	a.push_back({-((x - 1) % k), i});
    }
    sort(a.begin(), a.end());
    for (int i = 1; i <= n; i++) {
	cout << a[i - 1].second << " \n"[i == n];
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
