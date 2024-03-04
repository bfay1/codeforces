#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 1000005LL

int spf[MAXN];

void solve()
{
	int n, m;
	cin >> n >> m;
	if (n == 1 || spf[n] > m)
		cout << "YES\n";
	else
		cout << "NO\n";
}

signed main()
{
	int t;
	cin >> t;
	iota(spf, spf + MAXN, 0);
	for (int i = 2; i < MAXN; i++)
		if (spf[i] == i)
			for (int j = i + i; j < MAXN; j += i)
				spf[j] = min(spf[j], i);
	while (t--)
		solve();
}











