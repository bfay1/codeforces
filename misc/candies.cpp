#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a)
	cin >> x;

    vector<int> prefix(n + 1);
    for (int i = 1; i <= n; i++)
	prefix[i] = prefix[i - 1] + a[i - 1];

    int q;
    cin >> q;
    while (q--) {
	int l, r;
	cin >> l >> r;
	cout << (prefix[r] - prefix[l - 1]) / 10 << "\n";
    }
}










