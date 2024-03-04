#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ifstream fin("ladder.in");
    ofstream fout("ladder.out");

    int n;
    fin >> n;
    vector<int> a(n), dp(n + 1);

    for (auto& x : a) {
	fin >> x;
    }

    dp[1] = a[0];

    for (int i = 2; i <= n; i++) {
	dp[i] = a[i - 1] + max(dp[i - 1], dp[i - 2]);
    }

    fout << dp[n] << "\n";
}
