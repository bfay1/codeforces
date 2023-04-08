#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, m;
	cin >> n >> m;
	string s;
	string t;
	cin >> s >> t;

	if (s.find("*") == -1)
		return cout << (s == t ? "YES\n" : "NO\n"), 0;
	
	int i = 0;

	while (s[i] == t[i] && i < min(n, m))
		i++;

	while (s[n - 1] == t[m - 1] && i < min(n, m))
		n--, m--;

	cout << (s[i] == '*' && n - 1 == i ? "YES\n" : "NO\n");

}
