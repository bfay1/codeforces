#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> s(n), c(n);

    for (auto& x : s)
	cin >> x;
    for (auto& x : c)
	cin >> x;

    int ans = INT_MAX;

    for (int j = 1; j < n - 1; j++) {

	int front = INT_MAX;
	int back = INT_MAX;

	for (int i = 0; i < j; i++)
	    if (s[i] < s[j])
		front = min(front, c[i]);

	for (int k = j + 1; k < n; k++)
	    if (s[j] < s[k])
		back = min(back, c[k]);

	ans = min(ans, c[j] + front + back);
    }

    if (ans < INT_MAX)
	cout << ans << "\n";
    else
	cout << -1 << "\n";
}
