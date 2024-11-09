#include <bits/stdc++.h>
using namespace std;

#define watchln(x) cerr << (#x) << " = " << (x) << "\n"
#define watch(x) cerr << (#x) << " = " << (x) << " "

using ll = long long;

void solve() {

  int n, k;
  cin >> n >> k;

  map<int, ll> mp;

  while (k--) {
    int b, c;
    cin >> b >> c;
    mp[b] += c;
  }

  vector<pair<ll, int>> bottles;

  for (const auto& [b, c] : mp) {
    bottles.emplace_back(c, b);
  }
  
  sort(bottles.rbegin(), bottles.rend());
  ll ans = 0;

  int m = mp.size();

  for (int i = 0; i < min({m, n}); i++) {
    ans += bottles[i].first;
  }

  cout << ans << "\n";
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) 
      solve();
    return 0;
}
