#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ifstream fin("lepus.in");
    ofstream fout("lepus.out");

    int n, dist[3] {1, 3, 5};
    fin >> n;
    vector<int> dp(n, -1);
    string s;

    fin >> s;

    dp[0] = 0;

    for (int i = 1; i < n; i++) {
	if (s[i] == 'w')
	    continue;
	for (const auto& d : dist) {
	    if (0 <= i - d && dp[i - d] != -1) {
		dp[i] = max({0LL, dp[i], dp[i - d] + (s[i] == '\"')});
	    }
	}
    }

    fout << dp.back() << "\n";
}
