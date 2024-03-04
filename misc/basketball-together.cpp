/*
ID: jbrenda1
LANG: C++
TASK: skidesign
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, d;
	cin >> n >> d;
	vector<int> p(n);
	for (auto& x : p)
		cin >> x;
	sort(p.rbegin(), p.rend());
	
	int ans = 0;
	int l = 0, r = n - 1;
	
	while (l <= r) {
		int str = p[l];
		while (l < r && str <= d) {
			str += p[l];
			r--;
		}
		if (str > d)
			ans++;
		l++;
	}

	cout << ans << "\n";
}
