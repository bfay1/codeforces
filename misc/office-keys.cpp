#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll inf = LLONG_MAX;

int main()
{
    int n, k, p;
    cin >> n >> k >> p;
    vector<ll> a(n), b(k);

    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<vector<ll>> dp(k + 1, vector<ll>(n + 1, inf));
    dp[0][0] = 0;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            if (j < n)
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], max(dp[i][j], abs(a[j] - b[i]) + abs(b[i] - p)));
        }
    }

    cout << dp[k][n] << "\n";

}
