#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (auto& x : a)
	cin >> x;

    for (int i = 0; i < n; i++)
	cout << (n + 1) - a[i] << " \n"[i == n - 1];
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
