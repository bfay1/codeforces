#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int l = 0, r = n - 1, ans = 0;
	while (l < r) {
		ans += (a[l] + a[r])*(a[l] + a[r]);
		l++, r--;
	}	
	cout << ans << "\n";
}
