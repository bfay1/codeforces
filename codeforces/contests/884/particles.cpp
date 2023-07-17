#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

void solve()
{
    int n;
    cin >> n;
    int even = 0, odd = 0, mx = LLONG_MIN;

    for (int i = 0; i < n; i++) {
	int x;
	cin >> x;
	(i % 2 ? odd : even) += max(0LL, x);
	mx = max(mx, x);
    }

    cout << (max(even, odd) == 0 ? mx : max(even, odd)) << "\n";

}

signed main()
{

    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}



