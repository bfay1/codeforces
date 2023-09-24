#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	int n, ans = 0;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
	    cin >> x;
	sort(a.begin(), a.end());
	for (int i = 0; i < n / 2; i++) {
	    ans += a[n - i - 1] - a[i];
	}
	cout << ans << "\n";
    }
}
