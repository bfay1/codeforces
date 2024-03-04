#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int dec = n - 1, m = n*(n - 1)/2;
    vector<int> a, b(m);
    map<int, int> mp;

    for (auto& x : b) {
	cin >> x;
	mp[x]++;
    }

    for (auto& [k, v] : mp) {
	while (0 < v) {
	    v -= dec--;
	    a.push_back(k);
	}
    }

    a.push_back(mp.rbegin()->first);
    for (int i = 0; i < n; i++)
	cout << a[i] << " \n"[i == n - 1];
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
