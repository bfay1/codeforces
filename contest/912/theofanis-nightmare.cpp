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
        cin >> n;
        vector<ll> a(n), prefix(n + 1), arrays;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            prefix[i + 1] = prefix[i] + a[i];
        }

        ll ans = prefix[n], sum = a[0];
        ll prev = a[0], size = 1;

        for (int i = 1; i < n; i++) {
            ll x = (sum - (prev * size)) + (prev + a[i]) * size + (size + 1)*(prefix[n] - prefix[i + 1]);
            ll y = sum + a[i] * (size + 1) + (size + 2) * (prefix[n] - prefix[i + 1]);
            if (y < x) {
                sum -= prev * size;
                prev += a[i];
                sum += prev * size;
                ans = max(ans, x);
            } else {
                size++;
                sum += a[i] * size;
                prev = a[i];
                ans = max(ans, y);
            }
        }

        cout << ans << "\n";
    }
}
