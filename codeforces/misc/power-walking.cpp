#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	set<int> st;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.insert(x);
	}
	int cnt = st.size();
	for (int i = 1; i <= n; i++)
		cout << max(i, cnt) << " \n"[i == n];
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}			
