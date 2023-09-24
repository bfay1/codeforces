#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long t;
	cin >> t;
 
	function<long long(long long, long long)>
	nearest_multiple = [&] (long long a, long long b) {
		return b*(a / b + 1);
	};
 
	function<void(vector<pair<long long, long long>>&, long long)>
	solve = [&] (vector<pair<long long, long long>>& a, long long n) {
		vector<pair<long long, long long>> res;
		sort(a.begin(), a.end());
		cout << n << "\n" << a[0].second << " " << 0 << "\n";
		for (long long i = 0; i < n - 1; i++) {
			if (a[i + 1].first % a[i].first != 0 && a[i].first < a[i + 1].first) {
				cout << a[i + 1].second << " " << nearest_multiple(a[i + 1].first, a[i].first) - a[i + 1].first << "\n";
				a[i + 1].first = nearest_multiple(a[i + 1].first, a[i].first);
			} else if (a[i].first > a[i + 1].first) {
				cout << a[i + 1].second << " " << a[i].first - a[i + 1].first << "\n";
				a[i + 1].first = a[i].first;	
			} else {
				cout << a[i + 1].second << " " << 0 << "\n";
			}
		}
	};
 
	while (t--) {
		long long n, param = 0;
		cin >> n;
		vector<pair<long long, long long>> a(n);
		for (long long i = 0; i < n; i++) {
			long long a_i;
			cin >> a_i;
			a[i] = make_pair(a_i, i + 1);
		}
		solve(a, n);
	}
	return 0;
}
