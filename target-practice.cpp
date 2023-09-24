#include <bits/stdc++.h>
using namespace std;
#define int long long

char g[10][10];
int points[10][10]     {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
			{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
			{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
			{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
			{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
			{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
			{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
			{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
			{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
void solve()
{
	int ans = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> g[i][j];
			if (g[i][j] == 'X')
				ans += points[i][j];
		}
	}

	cout << ans << "\n";
	
}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}
