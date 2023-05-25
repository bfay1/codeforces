#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
	int temp;
	cin >> temp;
	a.push_back({temp, i});
    }

    vector<int> b(n);
    for (auto& x : b)
	cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
	int y = a[i].second;
	ans[y] = b[i];
    }

    for (int i = 0; i < n; i++)
	cout << ans[i] << " \n"[i == n - 1];
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}





















