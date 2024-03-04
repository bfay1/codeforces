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
	string n; cin >> n;
	int x = 0, y = 0;
	bool give_to_x = true;
	for (auto c : n) {
		x *= 10;
		y *= 10;
		int a = c - '0';
		x += a / 2;
		y += a / 2;
		if (a & 1) {
			if (give_to_x) {
				x++;
				give_to_x = false;
			} else {
				y++;
			}
		}
	}
	cout << x << " " << y << "\n";
}

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}

