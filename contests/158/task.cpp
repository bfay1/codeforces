#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;
    cin >> n;
    
    ll mx = 0, mx2 = 0;
    ll maxi = -1, maxi2 = -1;

    for (ll i = 0, x; i < n; i++) {
        cin >> x;
        if (mx < x || (mx == x && mx2 == 0)) {
            mx2 = mx;
            maxi2 = maxi;
            mx = x;
            maxi = i;
        } else if (mx2 < x) {
            mx2 = x;
            maxi2 = i;
        }
    }

    ll y = max({(n - maxi2 - 1) + mx2, mx2 + maxi2});

    cout << max({mx, y, mx + (n - maxi - 1), mx + maxi}) << "\n";
}
