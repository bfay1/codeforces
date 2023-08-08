#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;

	int ans = 0, cur = 0;

	for (int i = 0; i < n; i++) {
		cur = max(0LL, cur + a[i]);
		ans = max(cur, ans);
	}

	if (ans == 0 && count(a.begin(), a.end(), 0) == 0)
		ans = *max_element(a.begin(), a.end());
	cout << ans << "\n";
}









