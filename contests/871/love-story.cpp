#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string cf = "codeforces";
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < 10; i++)
		if (s[i] != cf[i])
			ans++;
	cout << ans << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}













