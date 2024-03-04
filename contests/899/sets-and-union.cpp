#include <bits/stdc++.h>
using namespace std;

void input(int n, vector<vector<int>>& sets)
{
	for (int i = 0, k, x; i < n; i++) {
		cin >> k;
		while (k--) {
			cin >> x;
			sets[i].push_back(x);
		}
	}
}

void solve()
{
	int n;
	cin >> n;

	vector<vector<int>> sets(n); input(n, sets);

	for ()

}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
