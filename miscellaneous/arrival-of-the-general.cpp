#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n; cin >> n;
	vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];
	int max_index = 0, min_index = n - 1;
	int mx = *max_element(a.begin(), a.end()), mn = *min_element(a.begin(), a.end());
	while (a[max_index] != mx) max_index++;
	while (a[min_index] != mn) min_index--;
	cout << max_index + n - (min_index + 1) - (max_index > min_index) << "\n";
}

signed main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t = 1;
	while(t--) solve();
	return 0;
}
