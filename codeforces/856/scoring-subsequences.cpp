#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n; cin >> n;
	queue<int> q;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		q.push(x);
		while (q.front() < q.size())
			q.pop();
		cout << q.size() << " \n"[i == n - 1];
	}
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
}
