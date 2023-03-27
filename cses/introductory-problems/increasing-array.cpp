#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n, a[200000], r = 0;
	cin >> n;
	for (int i = 0; i < 200000; i++) cin >> a[i];
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			r += a[i - 1] - a[i];
			a[i] = a[i - 1];
		}
	}
	cout << r;
	return 0;
}
