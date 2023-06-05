#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    int m = INT_MIN;
    int ans = 0;
    cin >> n;
    vector<vector<int>> mp(n + 1);

    for (int i = 0; i < n; i++) {
	int a, b;
	cin >> a >> b;
	mp[a].push_back(b);
	m = max(m, a);
    }

    for (auto& v : mp)
	sort(v.rbegin(), v.rend());
    
    for (int i = 1; i <= m; i++) {
	int x = min(i, (int)mp[i].size());
	for (int j = 0; j < x; j++) {
	    ans += mp[i][j];
	}
    }

    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
