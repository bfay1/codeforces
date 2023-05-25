#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> st;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
	if (st.find(s.substr(i, 2)) == st.end())
	    st.insert(s.substr(i, 2)), ans++;

    cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}





















