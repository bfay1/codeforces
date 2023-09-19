#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, a, b, x;
    map<int, pair<int, int>> mp;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (mp.count(x) == 0)
                mp[x] = {i, i};
            else
                mp[x].second = i;
        }
        for (int i = 0; i < k; i++) {
            cin >> a >> b;
            if (mp.count(a) * mp.count(b) && mp[a].first < mp[b].second)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        mp.clear();
    }
}
