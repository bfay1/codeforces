#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 1, cur = 1;

    for (int i = 0; i < n - 1; i++) {
	if (s[i] == s[i + 1])
	    cur++;
	else
	    cur = 1;
	ans = max(cur, ans);
    }

    cout << ans + 1 << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}










