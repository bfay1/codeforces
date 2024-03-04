#include <bits/stdc++.h>
using namespace std;

void solve()
{
	unsigned long long n, k, x;
	cin >> n >> k >> x;

	unsigned long long bottom = k*(k + 1)/2;
	unsigned long long top = n*(n + 1)/2 - (n - k)*(n - k + 1)/2;

	if (bottom <= x && x <= top)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
