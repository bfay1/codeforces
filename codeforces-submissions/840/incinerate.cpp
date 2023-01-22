
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> temp(n);
	vector<int> init(2*n);
	for (int i = 0; i < 2*n; i++) {
		cin >> init[i];
	}
	for (int i = 0; i < n; i++) {
		temp[i] = make_pair(init[i], init[i + n]);
	}
	sort(temp.begin(), temp.end());
	vector<int> h(n);
	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		h[i] = temp[i].first;
		p[i] = temp[i].second;
	}
	
	int i = 0, total_damage = 0;
 
	while (i < n && k > 0 && h.back() > total_damage) {
		total_damage += k;
		while (i < n - 1 && h[i] <= total_damage) i++;
		k -= *min_element(p.begin() + i, p.end());
	}
 
	if (h.back() <= total_damage) cout << "YES\n";
	else cout << "NO\n";
	return;
	
}
 
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
