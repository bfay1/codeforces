#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int a, b, c;
	cin >> a >> b >> c;
	string ans = "NO\n";
	for (int x = 0; x <= 10000; x++)
		for (int y = 0; y <= 10000; y++)
			if (a*x + b*y == c)
				ans = "YES\n";
	cout << ans;
}
