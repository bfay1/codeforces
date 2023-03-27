#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
	long long a, b;
	cin >> a >> b;
	cout << ((abs(a - b) > min(a, b) || (min(a, b) - abs(a - b)) % 3) ? "NO" : "YES") << endl;
}
 
int main()
{
	long long t;
	cin >> t;
	while(t--) solve();
	return 0;
}
