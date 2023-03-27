#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n, a, s;
	cin >> n;
	while (cin >> a) s += a;
	cout << n*(n + 1)/2 - s;
}
