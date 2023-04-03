/*
 * NAME: jbrenda1
 * LANG: C++
 * TASK: skidesign
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n;
	string s;
	cin >> n >> s;

	if (n == 1) {
		cout << (s[0] == '0' ? "NO\n" : "YES\n");
		return 0;
	}
	int zeroes = 1, ones = 0;
	s.push_back('0');

	for (auto c : s) {
		if (c == '1') {
			zeroes = 0;
			ones++;
		} else {
			zeroes++;
			ones = 0;
		}
		if (zeroes >= 3 || ones >= 2) {
			cout << "NO\n";
			return 0;
		}
	}
	
	cout << "YES\n";
	
}
