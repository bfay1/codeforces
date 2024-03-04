#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    int flag = 1;

    vector<int> ans(n + 1, 1);
    ans[0] = 0;

    int root = -1;

    for (int i = 1; i <= n; i++) {

	int p, c;
	cin >> p >> c;

	if (p > 0)
	    ans[p] &= c, ans[i] &= c;
	else
	    root = i;
    }

    ans[root] = 0;

    ans[root] = 0;

    if (count(ans.begin(), ans.end(), 1) == 0)
	return cout << -1 << "\n", 0;

    for (int i = 1; i <= n; i++)
	if (ans[i])
	    cout << i << "  ";

    cout << "\n";
}
