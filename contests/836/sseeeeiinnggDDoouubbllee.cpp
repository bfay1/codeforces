#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
	string s;
	cin >> s;
	cout << s;
	
	for (int i = s.size() - 1; i >= 0; i--) {
		cout << s[i];	
	}	
	cout << endl;
}
 
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
