#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    string s;
    cin >> s;

    int n = s.size();

    int ans[4] = { 0, 0, 0, 0 };
    char id[4] = { '.', '.', '.', '.' };
    bool unused[4] = { true, true, true, true };

    function <int(char)> f = [&] (char c) {
	if (c == 'R')
	    return 0LL;
	if (c == 'B')
	    return 1LL;
	if (c == 'Y')
	    return 2LL;
	if (c == 'G')
	    return 3LL;
	return 0LL;
    };

    function <char(int)> g = [&] (int x) {
	if (x == 0)
	    return 'R';
	if (x == 1)
	    return 'B';
	if (x == 2)
	    return 'Y';
	if (x == 3)
	    return 'G';
	return '!';
    };

    for (int i = 0; i < n; i++)
	if (s[i] != '!')
	    id[i % 4] = s[i], unused[f(s[i])] = false;;

    for (int i = 0; i < 4; i++) {
	if (id[i] != '.')
	    continue;
	for (int j = 0; j < 4; j++) {
	    if (unused[j]) {
		unused[j] = false;
		id[i] = g(j);
	    }
	}
    }

    string t = "";

    for (int i = 0; i < n; i++)
	t.push_back(id[i % 4]);

    for (int i = 0; i < n; i++)
	if (s[i] == '!')
	    ans[f(t[i])]++;

    cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << "\n";
}










