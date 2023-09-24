#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int x = 0;
    for (int i = 0; i < n; i++) {
	int id = i + 1;
	if ((id + k - 1) / k > x)
	    x++, a[i] = 1;
    }
    reverse(a.begin(), a.end());

    x = 0;
    for (int i = 0; i < n; i++) {
	    int id = i + 1;
	    x += (a[i] == 1);
	    if ((id + k - 1) / k > x)
		a[i] = 1, x++;
    }

    cout << count(a.begin(), a.end(), 1) << "\n";

}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
