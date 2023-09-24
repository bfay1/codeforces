#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto& x : a) {
	cin >> x;
    }
    vector<int> gaps;
    for (int i = 0; i < n - 1; i++) {
	gaps.push_back(abs(a[i] - a[i + 1]));
    }

    sort(gaps.begin(), gaps.end());

    cout << accumulate(gaps.begin(), gaps.end() - k + 1, 0LL) << "\n";
}

signed main()
{
    int t;
    cin >> t;

    while (t--) {
	solve();
    }
}





