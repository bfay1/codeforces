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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<char> c(k);
	for (auto& x : c)
		cin >> x;
	vector<int> b(n, 0);
	set<char> st;
	for (auto x : c)
		st.insert(x);
	for (int i = 0; i < n; i++)
		if (st.contains(s[i]))
			b[i] = 1;
	vector<int> dp(n + 1, b[0]);
	int ans = b[0];
	for (int i = 1; i < n; i++) 
		ans += (dp[i] = b[i] * (dp[i - 1] + b[i]));
	cout << ans << "\n";
}
