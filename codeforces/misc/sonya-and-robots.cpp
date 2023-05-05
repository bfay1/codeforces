#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> mp;
	bool vis[100001] = { false };
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}

	int ans = 0;

	for (int i = 0; i < n - 1; i++) {
		mp[a[i]]--;
		if (mp[a[i]] == 0)
			mp.erase(a[i]);
		if (vis[a[i]])
			continue;
		vis[a[i]] = true;
		ans += mp.size();
	}
	cout << ans << "\n";
}











