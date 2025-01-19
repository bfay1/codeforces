#include <bits/stdc++.h>
using namespace std;

#define watchln(x) cerr << (#x) << " = " << (x) << "\n"
#define watch(x) cerr << (#x) << " = " << (x) << " "

using ll = long long;

int add(string& layer)
{
  int ans = 0, n = layer.size();
  string s = layer + layer;
  for (int i = 0; i < n; i++) {
    ans += s.substr(i, 4) == "1543";
  }
  return ans;
}

void solve()
{

  int n, m;
  cin >> n >> m;
  vector<string> carpet(n);

  for (auto& row : carpet) {
    cin >> row;
  }

  int ans = 0;

  auto get_layer = [&] (int i) {

    string layer = "";

    for (int c = i; c < m - i; c++) {
      layer += carpet[i][c];
    }
    for (int r = i + 1; r < n - i; r++) {
      layer += carpet[r][m - i - 1];
    }
    for (int c = m - i - 2; c >= i; c--) {
      layer += carpet[n - i - 1][c];
    }
    for (int r = n - i - 2; r > i; r--) {
      layer += carpet[r][i];
    }

    return layer;

  };

  for (int i = 0; i < min(m, n) / 2; i++) {

    string layer = get_layer(i);

    ans += add(layer);
  }

  cout << ans << "\n";
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
      cerr << t << "\n", solve();
    return 0;
}
