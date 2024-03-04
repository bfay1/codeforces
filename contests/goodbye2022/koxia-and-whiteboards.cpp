#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	long long t; cin >> t;
	while (t--) {
		long long n, m, a, b; cin >> n >> m;
		priority_queue<long long, vector<long long>, greater<int>> pq;
		for (int i = 0; i < n; i++) {
			cin >> a;
			pq.push(a);
		}
		for (int i = 0; i < m; i++) {
			cin >> b;
			pq.pop();
			pq.push(b);
		}
		long long res = 0;
		while (!pq.empty()) {
			res += pq.top();
			pq.pop();
		}
		cout << res << "\n";
	}
	return 0;
}
