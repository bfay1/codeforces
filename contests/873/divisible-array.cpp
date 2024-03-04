#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cout << 2*i << " \n"[i == n];
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}






















