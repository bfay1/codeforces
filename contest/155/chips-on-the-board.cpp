#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long n, p = INT_MAX, q = INT_MAX, atotal = 0, btotal = 0;
		cin >> n;
		vector<long long> a(n), b(n);

		for (auto& x : a) {
			cin >> x;
			p = min(p, x);
			atotal += x;
		}

		for (auto& x : b) {
			cin >> x;
			q = min(q, x);
			btotal += x;
		}

		cout << min(n*p + btotal, n*q + atotal) << "\n";
	}
}
