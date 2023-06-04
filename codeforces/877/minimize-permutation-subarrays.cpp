#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int one = 0;
    int mx = n - 1;
    int two = 2;
    
    for (int i = 0; i < n; i++) {
	cin >> a[i];
	if (a[i] == 1)
	    one = i + 1;
	if (a[i] == n)
	    mx = i + 1;
	if (a[i] == 2)
	    two = i + 1;
    }

    bool sorted = (one < two && two < mx) || (two < one && one < mx)
		|| (mx < two && two < one) || (mx < one && one < two);
    if (sorted) {
	int st[3] = {one, two, mx};
	sort(st, st + 3);
	int middle = st[1];
	cout << mx << " " << middle << "\n";
    } else {
	cout << "1 1\n";
    }

}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
