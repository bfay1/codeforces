#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string x, ans = "";
    cin >> x;
    bool carry = false;
    int n = x.size();
    int index = n;

    for (int i = n - 1; 0 <= i; i--) {
	if (carry && x[i] < '9') {
	    x[i]++;
	} else if (carry && x[i] == '9') {
	    x[i] = '0';
	    continue;
	}
	carry = false;
	if ('5' <= x[i]) {
	    index = i;
	    carry = true;
	}
    }

    for (int i = n - 1; 0 <= i; i--) {
	if (index <= i) {
	    ans.push_back('0');
	} else {
	    ans.push_back(x[i]);
	}
    }

    if (carry) {
	ans.push_back('1');
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
	solve();
    }
}
