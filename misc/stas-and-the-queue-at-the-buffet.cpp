#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> people(n);
    for (auto& [a, b] : people)
        cin >> a >> b;

    sort(begin(people), end(people), [&] (auto& x, auto& y) {
            return x.second - x.first < y.second - y.first;
            });

    auto f = [&] (auto& person, int i) {
        auto [a, b] = person;
        return (i - 1) * a + (n - i) * b;
    };

    ll ans = 0;

    for (int i = 1; const auto& x : people) {
        ans += f(x, i++);
    }

    cout << ans << "\n";
    
}
