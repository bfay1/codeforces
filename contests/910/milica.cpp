#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ct = count(s.begin(), s.end(), 'B');
        if (ct == k) {
            cout << 0 << "\n";
            continue;
        } else if (ct < k) {
            cout << 1 << "\n";
            int a = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'A') {
                    a++;
                }
                if (a == k - ct) {
                    cout << i + 1 << " B\n";
                    break;
                }
            }
        } else if (k < ct) {
            cout << 1 << "\n";
            int b = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'B') {
                    b++;
                }
                if (b == ct - k) {
                    cout << i + 1 << " A\n";
                    break;
                }
            }
        }
    }
}
