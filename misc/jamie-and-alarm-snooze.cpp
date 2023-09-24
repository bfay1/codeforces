#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int x, h, m, y = 0;
	cin >> x >> h >> m;

	while (m % 10 != 7 && h % 10 != 7) {
		m -= x;
		if (m < 0) {
			m += 60;
			h = h ? h - 1 : 23;
		}
		y++;
	}

	cout << y << "\n";
}
