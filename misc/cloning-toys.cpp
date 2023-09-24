#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int x, y;
	cin >> x >> y;
	if (y == 0 || (y == 1 && x != 0) || (x - y + 1 < 0) || (x - y + 1) % 2 != 0)
		cout << "NO\n";
	else
		cout << "YES\n";

}
