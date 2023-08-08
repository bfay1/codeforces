#include <bits/stdc++.h>
using namespace std;
 
long long binexp(long long a, long long b) {
	long long res = 1;
	while(b) {
		if (b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}
 
int main() {
	long long n, ans = 0; cin >> n;
	for (long long i = 1;; i++) {
		long long a = n / binexp(5, i);
		if (!a) break;
		ans += a;
	}
	cout << ans << endl;
	return 0;
}
