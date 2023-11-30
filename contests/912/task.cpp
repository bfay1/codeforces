#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int n, q;
    cin >> n >> q;
    ll mask = (1LL << 62LL) - 1LL;

    vector<ll> a(n), count(64);

    for (auto& x : a) {
        cin >> x;
        mask &= x;
        for (ll i = 0; i < 32; i++) {
            if (x ^ (1LL << i)) {
                if (x > (1LL << i))
                    count[i] += (1LL << i);
                else
                    count[i] += (1LL << i) - x;
            }
        }
    }

    while (q--) {
        ll k, ans = 0;
        cin >> k;

        vector<ll> c = a;

        for (ll i = 31; i >= 0; i--) {
            vector<ll> b = c;

            ll sum = 0, ms = mask;
            for (ll j = 0; j < n; j++) {
                if (b[j] ^ (1LL << j)) {
                    if (b[j] < (1LL << i)) {
                        sum += (1LL << i) - b[j];
                        b[j] = (1LL << i);
                    } else {
                        sum += (1LL << i);
                    }
                }
            }

            if (sum <= k) {
                ans |= ms;
                k -= sum;

                c = b;
            }
        }

        for (int i = 0; i < n; i++) {
            if (bad.find(i) == bad.end()) {
                ans 
            }
        }
        cout << ans << "\n";
    }
}
