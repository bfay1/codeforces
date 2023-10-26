#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, ans = 0;
		cin >> n;
		unordered_map<int, vector<int>> athletes;
		pair<int, int> polycarp;
		for (int i = 0, s, e; i < n; i++) {
			cin >> s >> e;
			if (i == 0) {
				polycarp = {s, e}, ans = s;
			} else if (polycarp.first <= s && polycarp.second <= e) {
				ans = -1;
			}
		}

		cout << ans << "\n";

	}
}
