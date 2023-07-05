#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n;
	cin >> n;
	long long a = 0, b = 0;
	int acount = 0, bcount = 0, temp = 0;
	//generate a and b
	for (int i = 0; i < n; i++) {
		cin >> temp;
		a <<= 1;
		a |= temp;
		acount += temp;
	}
	for (int i = 0; i < n; i++) {
		cin >> temp;
		b <<= 1;
		b |= temp;
		bcount += temp;
	}
	//if a masks b or b masks a, we want to return the difference in their hamming weights
	if ((a & b) == a || (a & b) == b) {
		cout << abs(acount - bcount);
	}
	//if they don't mask, we want to return the difference in their hamming weights (potentially 0) plus the operation or rearranging b
	else {
		cout << abs(acount - bcount) + 1;
	}
	cout << "\n";
}
 
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
