#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	
	function<int(int)>
	bit_change = [&] (int n) {
		int b = (n & 1), ct = 0;
		while (n) {
			ct++;
			n >>= 1;
			if (b != (n & 1)) return ct;
		}
		return ct + 1;
	};
 
	function<void(vector<int>&)>
	solve = [&] (vector<int>& a) {
		int init_sum = accumulate(a.begin(), a.end(), 0), min_op = INT_MAX;
		if (init_sum % 2 == 0) {
			cout << 0 << "\n";
			return;
		}
 
		for (auto i : a) min_op = min(min_op, bit_change(i));
		cout << min_op << "\n";
	};
 
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		solve(a);
	}
	return 0;
}
