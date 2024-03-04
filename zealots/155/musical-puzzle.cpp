#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> st;
    for (int i = 0; i < n - 1; i++)
	st.insert(s.substr(i, 2));
    cout << st.size() << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
	solve();
}
