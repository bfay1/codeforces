#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	function <bool(char)> flake = [&] (char c) { return c == '*'; };
	function <bool(char)> cane = [&] (char c) { return c == '?'; };
	function <bool(char)> special = [&] (char c) { return c == '*' || c == '?';	};

	string s;
	cin >> s;
	int k;
	cin >> k;
	int n = s.size();

	int canes = count(s.begin(), s.end(), '?');
	int flakes = count(s.begin(), s.end(), '*');
	int delta = n - canes - flakes - k;

	stack<char> st;

	for (int i = 0; i < n; i++) {
		if (!special(s[i])) {
			st.push(s[i]);
		} else {
			while (delta < 0 && flake(s[i])) {
				char c = st.top();
				st.push(c);
				delta++;
			}
			if (delta > 0) {
				st.pop();
				delta--;
			}
		}
	}

	string ans = "";

	while (!st.empty()) {
		ans.push_back(st.top());
		st.pop();
	}

	reverse(ans.begin(), ans.end());

	if (ans.size() == k)
		cout << ans << "\n";
	else
		cout << "Impossible\n";
}













