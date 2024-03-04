#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll ans = 0, prev = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (prev < x)
                ans += x - prev - (i == 0);
            prev = x;
        }
        cout << ans << "\n";
    }
}
