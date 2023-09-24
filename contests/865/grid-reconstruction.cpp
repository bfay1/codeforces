#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin >> n;
	vector<int> big_odd;
	vector<int> small_odd;
	vector<int> big_even;
	vector<int> small_even;

	for (int i = 1; i < n; i += 2)
		small_odd.push_back(i);
	for (int i = 2*n - 1; i >= n + 1; i -= 2)
		big_odd.push_back(i);
	for (int i = 2; i <= n; i += 2)
		small_even.push_back(i);
	for (int i = n + 2; i <= 2*n; i += 2)
		big_even.push_back(i);
	for (int i = 0; i < n; i++)
		cout << (i % 2 == 0 ? big_odd[i / 2] : small_odd[i / 2]) << " \n"[i == n - 1];
	for (int i = 0; i < n; i++)
		cout << (i % 2 == 0 ? small_even[i / 2] : big_even[i / 2]) << " \n"[i == n - 1];
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
