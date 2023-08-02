#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, k, i = 1;
    cin >> n >> k;
    string s;
    cin >> s;
    if (s.size() == 1) {
	cout << (k ? "0" : s ) << "\n";
	return 0;
    }
    if (s[0] != '1' && k) {
	s[0] = '1';
	k--;
    }

    while (i < s.size() && k) {
	if (s[i] - '0') {
	    s[i] = '0';
	    k--;
	}
	i++;
    }

    cout << s << "\n";
}
