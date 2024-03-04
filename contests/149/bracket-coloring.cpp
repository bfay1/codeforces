#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int balance = s[0] == '(' ? 1 : -1;
    int brk = -1;

    int open = count(s.begin(), s.end(), '(');
    int close = count(s.begin(), s.end(), ')');

    if (open != close || n % 2) {
	cout << -1 << "\n";
	return;
    }

    for (int i = 1; i < n; i++) {
	if (s[i] == '(')
	    balance++;
	else
	    balance--;
	if (balance == 0 && (s[i] == ')' || brk == -1))
	    brk = i;
    }

    if (brk == -1) {
	cout << -1 << "\n";
	return;
    }

    cout << (brk < n - 1) + 1 << "\n";

    for (int i = 0; i < n; i++)
	cout << 1 + (brk < i) << " \n"[i == n - 1];
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}










