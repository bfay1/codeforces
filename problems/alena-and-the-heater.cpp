#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

typedef long long ll;

struct last5 {
    vector<int> a;
    int mx = INT_MIN;
    int mn = INT_MAX;
    last5(vector<int>& x);
    void insert(int x);
};

last5::last5(vector<int>& x) {
    a.resize(5);
    copy(begin(x), begin(x) + 5, begin(a));
    mx = *max_element(begin(a), end(a));
    mn = *min_element(begin(a), end(a));
}

void last5::insert(int x) {
    for (int i = 0; i < 4; i++)
        swap(a[i], a[i + 1]);
    a[4] = x;

    mx = *max_element(begin(a), end(a));
    mn = *min_element(begin(a), end(a));
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto& x : a)
        cin >> x;

    string b;
    cin >> b;

    last5 thing(a);

    int l = *min_element(begin(a), end(a)) - 1;
    int r = *max_element(begin(a), end(a)) + 1;

    for (int i = 4; i < n; i++) {
        if (i > 4) thing.insert(a[i]);

        if (b[i] == '1' && b[i - 1] == '0') {
            l = max(l, thing.mx + 1);
        } else if (b[i] == '0' && b[i - 1] == '1') {
            r = min(r, thing.mn - 1);
        }
    }

    cout << l << " " << r << "\n";
}
