#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k, n = s.size();
    cin >> k;

    int z = count(begin(s), end(s), '0');
    int r = size(s) - z;
    if (z < k) {
        return cout << r + (z - 1) << "\n", 0;
    }
    reverse(begin(s), end(s));

    int j, ans = 0, zeroes = 0;

    for (int i = 0; zeroes < k && i < n; i = j) {

        int count = 0;
        for (j = i; s[i] == s[j]; ) {
            count++, j++;
        }

        if (s[i] != '0') {
            ans += count;
        } else {
            zeroes += count;
        }
    }

    cout << ans << "\n";
    
}
