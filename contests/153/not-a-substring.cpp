#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    
    if (s == "()") {
        cout << "NO\n";
        return;
    } else {
        cout << "YES\n";
    }

    string x = "";
    string y = "";
    for (int i = 0; i < s.size(); i++)
        x += "(", y += "()";
    for (int i = 0; i < s.size(); i++)
        x += ")";

    if (x.find(s) == -1)
        cout << x << "\n";
    else
        cout << y << "\n";
}

signed main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
