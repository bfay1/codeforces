#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long n, total = 0, min_diff = INT_MAX, s = 0;
	cin >> n;
	vector<long long> a(n);
	
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}
 
	long long res = 0;
 
	function<void(long long, long long)>
	subset = [&] (long long s, long long i) {
		if (s > total / 2) return;
		res = max(res, s);
		if (i == n) return;
		subset(s + a[i], i + 1);
		subset(s, i + 1);
		return;
	};
 
	subset(0, 0);
	
	cout << total - 2*res << endl;
 
	return 0;
}
