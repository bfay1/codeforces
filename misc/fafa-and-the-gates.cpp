#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, u = 0, r = 0, ans = 0, sign = 0;
    cin >> n;
    string s;
    cin >> s;
    for (const auto& c : s) {
	(c == 'U' ? u : r)++;
	if (sign == 0) {
	    sign = u - r;
	}
	if ((u - r) * sign < 0) {
	    sign *= -1;
	    ans++;
	}
    }

    cout << ans << "\n";
}
