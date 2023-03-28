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
	sort(a.begin(), a.end());
	vector<int> ans1;
	vector<int> ans2;
	for (int i = 0; i < (n / 2) * 2; i += 2) {
		ans1.push_back(a[i]);
		ans2.push_back(a[i + 1]);
	}
	reverse(ans2.begin(), ans2.end());
	for (auto x : ans1)
		cout << x << " ";
	if (n & 1)
		cout << a.back() << " ";
	for (int i = 0; i < ans2.size(); i++)
		cout << ans2[i] << " \n"[i == ans2.size() - 1];
}
