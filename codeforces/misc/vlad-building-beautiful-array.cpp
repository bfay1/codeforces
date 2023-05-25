#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    bool odd = false;
    int mn = INT_MAX;

    while (n--) {
	int x;
	cin >> x;
	if (x % 2)
	    odd = true;
	mn = min(mn, x);
    }

    if (mn % 2 == 0 && odd)
	cout << "NO\n";
    else
	cout << "YES\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}





















