#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    int ans = 0;
    int a = 0, b = 0;
    bool draw = false;
    while (n--) {
	int c, d;
	cin >> c >> d;
	ans += max(0LL, min(c, d) - max(a, b) + !draw);
	draw = c == d;
	a = c, b = d;
    }
    cout << ans << "\n";
}




