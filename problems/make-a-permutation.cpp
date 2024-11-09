#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), count(n + 1), need, prefix(n + 1);

    for (auto& x : a) {
        cin >> x;
        count[x]++;
    }

    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            need.push_back(i);
        }
    }

    sort(begin(need), end(need));

    int pos = 0, ans = 0;

    for (auto& x : a) {
        if (count[x] > 1 && (x > need[pos] || prefix[x])) {
            count[x]--;
            x = need[pos];
            pos++;
            ans++;
        }
        prefix[x] = true;
    }

    cout << ans << "\n";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
    }
}
