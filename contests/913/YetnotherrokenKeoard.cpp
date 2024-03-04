#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> upper, lower;
        for (int i = 0; auto& x : s) {
            if (x == 'b' || x == 'B') {
                auto& stack = (x == 'b' ? lower : upper);
                x = '?';
                i++;
                if (stack.empty()) continue;
                int index = stack.back(); stack.pop_back();
                s[index] = '?';
            } else {
                (x >= 'a' ? lower : upper).push_back(i++);
            }
        }

        for (const auto& x : s) if (x != '?') cout << x;
        cout << "\n";
    }
}
