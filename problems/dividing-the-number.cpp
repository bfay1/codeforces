#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve();

signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
	int x = n * (n + 1) / 4, s = n*(n + 1)/2;
	vector<int> ans;
	int sum = 0;
	while (x) {
		ans.push_back(min(x, n));
		sum += min(x, n);
		if (x > n)
			x -= n--;
		else
			break;
	}
		
	cout << s - 2*sum << "\n" << ans.size() << " ";
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " \n"[i == ans.size() - 1];
}
