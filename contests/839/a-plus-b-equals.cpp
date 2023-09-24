#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;
 
void solve() {
	string s;
	cin >> s;
	cout << (long long)(s[0] - '0') + (long long)(s[2] - '0') << "\n";
}
 
int main()
{
	long long t;
	cin >> t;
	while (t--) solve();
	return 0;
}
