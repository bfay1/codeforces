#include <bits/stdc++.h>
using namespace std;
 
const long long mod = 1000000007;
long long binpow(long long a, long long b) {
	long long res = 1;
	while (b) {
		if (b & 1)  res *= a;
		res = res % mod;
		a *= a;
		a = a % mod;
		b >>= 1;
	}
	return res;
}
 
int main() {
	long long n; cin >> n;
	long long ret = binpow(2, n);
	cout << ret << "\n";
	return 0;
}
