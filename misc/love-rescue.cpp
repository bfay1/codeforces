#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

typedef long long ll;

int main()
{
    int n;
    string a, b;
    cin >> n >> a >> b;

    map<char, char> parent;
    map<char, int> sz;

    for (const auto& x : "abcdefghijklmnopqrstuvwxyz"s) {
        parent[x] = x, sz[x] = 1;
    }

    auto find = [&] (auto self, char v) -> char {
        if (v == parent[v])
            return v;
        return parent[v] = self(self, parent[v]);
    };

    auto unite = [&] (char a, char b) {
        a = find(find, a), b = find(find, b);
        if (a != b) {
            if (sz[a] < sz[b])
                swap(a, b);
            parent[b] = a;
            sz[a] += sz[b];
        }
    };

    vector<pair<char, char>> ans;

    for (int i = 0; i < n; i++) {
        if (find(find, a[i]) != find(find, b[i])) {
            ans.emplace_back(a[i], b[i]);
            unite(a[i], b[i]);
        }
    }

    cout << size(ans) << "\n";

    for (const auto& [a, b] : ans) {
        cout << a << " " << b << "\n";
    }

}
