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
	if (n % 2 == 0) {
		cout << "NO\n";
		return;
	} else {
		cout << "YES\n";
	}

	multiset<int> ms;
	for (int i = 2; i <= 2*n - 1; i++) ms.insert(i);

	cout << 1 << " " << 2*n << "\n";

	int lsum = 2*n, rsum = 2*n + 2;
	int goal, x;
	for (int i = 0; i < n / 2; i++) {
		x = *ms.begin();
		if (i & 1) {
			goal = rsum - x;
			rsum++;
		}
		else {
			goal = lsum - x;
			lsum--;
		}
		cout << x << " " << goal << "\n";
		ms.erase(x);
		ms.erase(goal);
	}

	return;
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}

