#include <bits/stdc++.h>
using namespace std;

int comb(int x)
{
	return x * (x + 1) / 2;
}

void solve()
{
	int n, k;
	cin >> n >> k;
	if (n == 2 && k == 0) {
		cout << "YES\n -1 1\n";
		return;
	}
	int num = 0;
	for (int i = 2; i <= n; i++) {
		num = comb(i - 1) + comb(n - i - 1);
		if (num == k) {
			cout << "YES\n";
			for (int j = 0; j < i; j++)
				cout << 1 << " \n"[j == n - 1];
			for (int j = 0; j < n - i; j++)
				cout << -1 << " \n"[j == n - i - 1];
			return;
		}
	}
	cout << "NO\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
