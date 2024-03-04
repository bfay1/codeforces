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
	++*min_element(a.begin(), a.end());
	cout << accumulate(a.begin(), a.end(), 1, multiplies()) << "\n";
}

signed main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}
