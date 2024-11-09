#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	string s;
	cin >> s;
	int n = s.size();
	vector<char> pre(n, 'z' + 1);
	for (int i = 1; i < n; i++)
		pre[i] = (char)min((int)pre[i - 1], (int)s[i - 1]);
	cout << "Mike\n";
	for (int i = 1; i < n; i++)
		cout << (pre[i] >= s[i] ? "Mike\n" : "Ann\n");
}
