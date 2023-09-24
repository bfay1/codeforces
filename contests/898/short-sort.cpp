#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	string s;
	cin >> s;
	if (s[0] == 'c' && s[2] == 'a')
		cout << "YES\n";
	else if (s[1] == 'c' && s[2] == 'b')
		cout << "YES\n";
	else if (s[0] == 'b' && s[1] == 'a')
		cout << "YES\n";
	else if (s == "abc")
		cout << "YES\n";
	else
		cout << "NO\n";
}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}
