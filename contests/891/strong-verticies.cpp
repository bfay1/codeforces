#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), ans;
    vector<pair<int, int>> v(n);

    for (auto& x : a)
	cin >> x;
    for (auto& x : b)
	cin >> x;

    for (int i = 0; i < n; i++)
	v[i] = {b[i] - a[i], i + 1};

    sort(v.begin(), v.end()); 

    for (int i = 0; i < n; i++)
	if (v[i].first == v[0].first)
	    ans.push_back(v[i].second);

    cout << ans.size() << "\n";

    for (int i = 0; i < ans.size(); i++)
	cout << ans[i] << " \n"[i == ans.size() - 1];

}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
