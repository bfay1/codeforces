#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long n, m, k, i = 0, j = 0, ret = 0;
	cin >> n >> m >> k;
	vector<long long> t(n);
	vector<long long> a(m);
	for (long long z = 0; z < n; z++) cin >> t[z];
	for (long long z = 0; z < m; z++) cin >> a[z];
	sort(t.begin(), t.end());
	sort(a.begin(), a.end());	
 
	while (i < n && j < m) {
		if (t[i] > a[j] + k)
			j++;
		else if (t[i] < a[j] - k)
			i++;
		else
			i++, j++, ret++;
	}
 
	cout << ret << endl;
	
	return 0;
}
