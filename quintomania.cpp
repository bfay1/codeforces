#include <bits/stdc++.h>
using namespace std;

#define watch(x) cout << (#x) << " = " << (x) << "\n"

int main()
{
  cin.tie(nullptr)->sync_with_stdio(false);

  auto perfect = [&] (int n, vector<int>& notes) {
    for (int i = 0; i < n - 1; i++) {
      int diff = abs(notes[i] - notes[i + 1]);
      if (diff != 5 && diff != 7) {
        return false;
      }
    }
    return true;
  };

  string ans[] = { "NO\n", "YES\n" };

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> notes(n);

    for (auto& x : notes)
      cin >> x;

    cout << ans[perfect(n, notes)];
    
  }
  return 0;
}
