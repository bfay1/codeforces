#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	
	int mx = accumulate(a.begin(), a.end(), a[0], bit_or<int>()), mn = accumulate(a.begin(), a.end(), a[0], bit_and<int>());
	cout << mx - mn << "\n";
	return;
}
 
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
