#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int n, m;
	cin >> n >> m;
	string s;
	string t;
	cin >> s >> t;
	
	if (s.find("*") == -1) {
		cout << (s == t ? "YES\n" : "NO\n");
		return 0;
	}

	if (s == "*") {
		cout << "YES\n";
		return 0;
	}

	if (n >= m + 1) {
		if (n == m + 1) {
			string temp = "";
			for (auto c : s)
				if (c != '*')
					temp.push_back(c);
			cout << (temp == t ? "YES\n" : "NO\n");
			return 0;
		}
		cout << "NO\n";
		return 0;
	}

	if (s[0] == '*') {
		string o = s.substr(1, s.size());
		string p = t.substr(m - (n - 1), m);
		cout << (o == p ? "YES\n" : "NO\n");
		return 0;
	}

	if (s.back() == '*') {
		string r = s.substr(0, n - 1);
		string z = t.substr(0, n - 1);
		cout << (r == z ? "YES\n" : "NO\n");
		return 0;
	}

	int location = s.find("*");

	string a = s.substr(0, location);
	string b = s.substr(location + 1);

	int x = t.find(a);
	int y = t.find(b);

	if (x != 0 || y == -1) {
		cout << "NO\n";
		return 0;
	}

	string f = t.substr(0, a.size());
	string g = t.substr(y, t.size() - 1);

	if (f == a && g == b) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
