#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll dp[1000001];
 
int main()
{
	int n, x;
	cin >> n >> x;
	vector<ll> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	dp[0] = 1;
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j < n; j++) {
			if (c[j] <= i) {
				dp[i] += dp[i - c[j]];
				dp[i] %= mod;
			}
		}
	}
	cout << dp[x] << "\n";
	return 0;
}
