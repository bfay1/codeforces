#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
	int n, q;
	cin >> n >> q;
	set<int> st = {0};
	vector<int> p(n);
	int ans = 1;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		p[i] = x;
		if (st.find(x - 1) == st.end())
			ans++;
		st.insert(x);
	}

	while (q--) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		if (p[a] > p[b])
			cout << ans - 1 << "\n";
		else
			cout << ans + 1 << "\n";
		swap(p[a], p[b]);
	}
}










