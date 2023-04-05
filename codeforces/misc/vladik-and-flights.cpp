#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, a, b;
	string s;
	cin >> n >> a >> b >> s;
	cout << abs(s[a - 1] - s[b - 1]) << "\n";
}
