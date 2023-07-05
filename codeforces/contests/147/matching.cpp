#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int ans = 1;
	for (auto c : s)
		if (c == '?')
			ans *= 10;
	if (s[0] == '?')
		ans -= (ans / 10);
	if (s[0] == '0')
		cout << 0 << "\n";
	else
		cout << ans << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
