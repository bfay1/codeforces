#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

const int mod = 1e9 + 7;
const int maxn = INT_MAX;
const int minn = INT_MIN;
const int MAX = LLONG_MAX;
const int MIN = LLONG_MIN;

signed main()
{
    ifstream fin("ladder.in");
    ofstream fout("ladder.out");

    int n;
    fin >> n;
    vector<int> a(n), dp(n + 1, MIN);

    for (auto& x : a) {
	fin >> x;
    }

    if (n == 1) {
	fout << a[0] << "\n";
	return 0;
    } else if (n == 2) {
	fout << a[0] + a[1] << "\n";
	return 0;
    }

    dp[0] = 0, dp[1] = a[0];

    for (int i = 2; i <= n; i++) {
	dp[i] = a[i - 1] + max(dp[i - 1], dp[i - 2]);
    }

    fout << dp[n] << "\n";
}
