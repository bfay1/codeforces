#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> numbers;
    char first = '?';
    for (auto c : s) {
	if (c != '?')
	    numbers.push_back(c);
	if (c != '?' && first == '?')
	    first = c;
    }

    if (is_sorted(numbers.begin(), numbers.end())) {
	char cur = '0';
	for (auto c : s) {
	    if (c == '1')
		cur = '1';
	    cout << cur;
	}
	cout << "\n";
	return;
    }

    if (first == '?')
	first = '0';

    char prev = s[0] == '?' ? first : s[0];
    s[0] = prev;

    for (int i = 1; i < n; i++) {
	if (s[i] == '?')
	    s[i] = prev;
	else if (s[i] != prev)
	    prev = s[i];
    }

    cout << s << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}










