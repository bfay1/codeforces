#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n;
	cin >> n;
	if (n & 1) {
		while (n--) cout << 1 << " ";
		cout << endl;
	} else {
		for (int i = 0; i < n - 2; i++) {
			cout << 2 << " ";
		}	
		cout << 1 << " " << 3 << endl;
	}
	return;
}
 
int main()
{
	int t; 
	cin >> t;
	while (t--) solve();
	return 0;
}
