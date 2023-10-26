#include <bits/stdc++.h>
using namespace std;

int main()
{
        int q;
        cin >> q;

        multiset<int> left, right;

        while (q--) {
                char op;
                cin >> op;
                int l, r;
                cin >> l >> r;
                if (op == '+') {
                        left.insert(l);
                        right.insert(r);
                } else {
                        left.extract(l);
                        right.extract(r);
                }

                if (left.size() < 2) {
                        cout << "NO\n";
                        continue;
                }

                auto it = left.upper_bound(*right.begin());

                if (it != left.end()) {
                        cout << "YES\n";
                } else {
                        cout << "NO\n";
                }
        }
}
