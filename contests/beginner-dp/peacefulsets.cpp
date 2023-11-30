#include <bits/stdc++.h>
using namespace std;

long long dp[12][2001];

int main()
{
    ifstream fin("peacefulsets.in");
    ofstream fout("peacefulsets.out");

    long long n, ans = 0;
    fin >> n;

    dp[0][0] = 1;

    for (int str = 1; str <= n; str++) {
        for (int i = 0, p = 1; i < 12 && p <= str; i++, p = (p << 1) | 1) {
            for (int j = 0; j <= i; j++) {
                dp[i][str] += dp[j][str - p];
            }
            if (str == n) ans += dp[i][str];
        }
    }

    fout << ans << "\n";

}
