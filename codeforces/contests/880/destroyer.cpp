#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
 
void solve()
{
    int n, mx = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
	int x;
	cin >> x;
	mx = max(mx, x);
	mp[x]++;
    }

    for (int i = 0; i <= mx; i++) {
	if (i && mp[i - 1] < mp[i]) {
	    cout << "NO\n";
	    return;
	}
    }
    cout << "YES\n";
}
 
signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}




