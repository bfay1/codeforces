/*
 * =====================================================================================
 *
 *       Filename:  task.cpp
 *
 *    Description:  My competitive programming file 
 *
 *        Version:  1.0
 *        Created:  02/06/2023 08:46:59 PM
 *       Revision:  none
 *       Compiler:  GNU G++20 11.2.0 (64 bit, winlibs)
 *
 *         Author:  brendan
 *   Organization:  Columbia
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n; cin >> n;
	int two_ct = 0;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 2) two_ct++;
	}
	if (two_ct & 1) {
		cout << -1 << "\n";
		return;
	} else {
		int two_ct_2 = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 2) two_ct_2++;
			if (two_ct_2 == two_ct / 2) {
				cout << i + 1 << "\n";
				return;
			}
		}
	}
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}

