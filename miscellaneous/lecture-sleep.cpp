#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), t(n), p(n + 1), q(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        p[i + 1] = p[i] + a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        t[i] *= a[i];
        q[i + 1] = q[i] + t[i];
    }

    int ans = 0;

    for (int i = k; i <= n; i++) {
        ans = max(ans, p[i] - p[max(i - k, 0)] + q[n] - (q[i] - q[max(i - k, 0)]));
    }

    cout << ans << "\n";
}

