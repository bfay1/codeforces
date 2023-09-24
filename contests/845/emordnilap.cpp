#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
 
int main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	
	int t; cin >> t;
	long long fact[100001];
	fact[0] = 1;
	for (int i = 1; i < 100001; i++) {
		fact[i] = (long long)(i * fact[i - 1]) % mod;
	}
	while (t--) {
		long long n;
		cin >> n;
		long long perm = ((long long) n * n - n) % mod;
		cout << (long long) perm*fact[n] % mod << "\n";
	}
 
	return 0;
}
