#include <bits/stdc++.h>
using namespace std;

#define watchln(x) cerr << (#x) << " = " << (x) << "\n"
#define watch(x) cerr << (#x) << " = " << (x) << " "

using ll = long long;

bool check(string& s, int i)
{
  return i >= 0 && i < int(s.size()) - 3 && s.substr(i, 4) == "1100";
}

bool check_range(string& s, int i)
{
  for (int j = 0; j < 4; j++)
    if (check(s, i - j))
      return true;
  return false;
}

void solve() {
  string s;
  cin >> s;
  int n = s.size();

  int count = 0;

  for (int i = 0; i < n; i++) {
    count += (check(s, i));
  }

  int q;
  cin >> q;

  while (q--) {
    int i, v;
    cin >> i >> v; --i;

    if (s[i] != v + '0') {

      bool before = check_range(s, i);

      s[i] = v + '0';

      bool after = check_range(s, i);

      count += after - before;
    }

    cout << (count ? "YES\n" : "NO\n");
  }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
      solve();
    return 0;
}
