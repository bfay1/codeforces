#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n; cin >> n;
	vector<int> a(n);
	iota(a.begin(), a.end(), 1);
	if (n == 1) cout << 1;
	else if (n == 3 || n == 1) cout << -1;
	else if (n & 1) {
		for (int i = 2; i < n; i++) a[i] = i - 1;
		a[0] = n; a[1] = n - 1;
		for (int i = 0; i < n; i++) cout << a[i] << " ";
	} else {
		for (int i = 0; i < n; i+= 2) a[i] ^= a[i + 1] ^= a[i] ^= a[i + 1];
		for (int i = 0; i < n; i++) cout << a[i] << " ";
	}
	cout << "\n";
}
 
int main() {	
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
