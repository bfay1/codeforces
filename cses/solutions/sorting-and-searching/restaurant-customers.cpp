/*
 * =====================================================================================
 *
 *       Filename:  restaurant-customers.cpp
 *
 *    Description:  CSES problem of the same name
 *
 *        Version:  1.0
 *        Created:  02/09/2023 12:55:21 PM
 *       Revision:  none
 *       Compiler:  G++17
 *
 *         Author:  Brendan 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int ans = 0, cur = 0, n, f, s; cin >> n;
	vector<pair<int, int>> a;
	for (int i = 0; i < n; i++) {
		cin >> f >> s;
		a.push_back({f, 1});
		a.push_back({s, -1});
	}

	sort(a.begin(), a.end());

	for (auto &p : a) {
		cur += p.second;
		ans = max(ans, cur);
	}

	cout << ans << "\n";
}
