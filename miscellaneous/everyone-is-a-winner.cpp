#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << ": " << x << "\n"

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    auto print = [&] (auto& x) {
        int n = size(x);
        for (int i = 0; i < n; i++)
            cout << x[i] << " \n"[i == n - 1];
    };

    vector<int> ans;

    for (int i = 0; i < sqrt(n); i++)
        ans.push_back(i);

    for (int i = sqrt(n); i >= 1; i--) {
        if (ans.back() < (n / i))
            ans.push_back(n / i);
    }

    cout << size(ans) << "\n";

    print(ans);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
