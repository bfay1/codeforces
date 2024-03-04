#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char, int> closing, opening;

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for (int i = n - 1; i >= 0; i--) {
        if (closing.find(s[i]) == closing.end()) {
            closing[s[i]] = i;
        }
    }

    for (int i = 0; const auto& x : s) {
        if (opening.find(x) == opening.end()) {
            opening[x] = i;
        }

        i++;
    }

    int open = 0;

    for (int i = 0; const auto& x : s) {

        if (i == opening[x]) {
            open++;
        }

        if (open > k) {
            return cout << "YES\n", 0;
        }

        if (i == closing[x]) {
            open--;
        }
        i++;
    }

    cout << "NO\n";
}
