#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve();

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
	string s; cin >> s;
	stack<char> st;
	int inv = 0;
	for (auto c : s) {
		if (c == '(')
			st.push(c);
		else if (!st.empty())
			st.pop();
		else if (st.empty())
			inv++;
	}
	string ans = count(s.begin(), s.end(), ')') == count(s.begin(), s.end(), '(') && inv < 2 && st.size() < 2 ? "YES\n" : "NO\n";
	cout << ans;
}
