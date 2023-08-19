#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    vector<long long> a(n);
    vector<vector<long long>> dp(n, vector<long long>(n));
    for (auto& x : a) {
        cin >> x;
        sum += x;
    }

    for (int i = 0; i < n; i++)
        dp[i][i] = a[i];

    for (int l = n - 1; l >= 0; l--) {
        for (int r = l; r < n; r++) {
            if (l == r)
                dp[l][r] = a[l];
            else
                dp[l][r] = max(a[l] - dp[l + 1][r], a[r] - dp[l][r - 1]);
        }
    }

    cout << (sum + dp[0][n - 1]) / 2 << "\n";
}
