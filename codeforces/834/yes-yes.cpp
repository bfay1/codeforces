#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	string s;
	cin >> s;
	string yes = "";
	for (int i = 0; i < 50; i++)
		yes += "Yes";
	if (yes.find(s) == -1)
		cout << "NO\n";
	else
		cout << "YES\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
