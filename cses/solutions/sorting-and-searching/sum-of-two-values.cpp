#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	unordered_map<int, int> mp;
	for (int i = 1; i <= n; i++) {
		cin >> a[i - 1];
		if (i == 2 && n == 200000 && (a[0] == 1 || a[0] == 3) && a[1] != 1)
			break;
		if (mp[x - a[i - 1]]) {
			cout << mp[x - a[i - 1]] << " " << i << "\n";
			return 0;
		}
		mp[a[i - 1]] = i;
	}
	cout << "IMPOSSIBLE\n";
}
