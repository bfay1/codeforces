#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
 
void solve()
{
    int n, pre = 0, ans = 0;
    cin >> n;
    vector<int> a(n), seen(256);
    seen[0] = 1;
    for (auto& x : a) {
	cin >> x;
	pre ^= x;
	seen[pre]++;
	for (int i = 0; i < 256; i++) {
	    if (!seen[i]) {
		continue;
	    }
	    ans = max(ans, pre ^ i);
	}
    }
    cout << ans << "\n";
}
 
signed main()
{
    int t;
    cin >> t;
 
    while (t--) {
	solve();
    }
}




