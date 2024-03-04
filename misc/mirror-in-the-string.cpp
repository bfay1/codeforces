#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        char mn = 'z';
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for (int i = 0; const auto& x : s) {
            if (i && x >= ans.back() && (x > mn || x >= ans[0])) {
                break;
            }
            ans.push_back(x);
            i++;
            mn = min(mn, x);
        }
        ans += string(ans.rbegin(), ans.rend());
        cout << ans << "\n";
    }
}
