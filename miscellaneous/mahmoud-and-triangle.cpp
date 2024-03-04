#include <bits/stdc++.h>
using namespace std;
#define int long long

bool valid(int a, int b, int c)
{
	return a + b > c && a + c > b && b + c > a;
}

signed main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& x : a)
		cin >> x;
	sort(a.begin(), a.end());
	for (int i = 0; i < n - 2; i++) {
		if (valid(a[i], a[i + 1], a[i + 2])) {
				cout << "YES\n";
				return 0;
		}
	}
	cout << "NO\n";
}			
