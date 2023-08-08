#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long l = 0, m = 0;
	string s;
	cin >> s;
	char d = s[0];
	for (auto c : s) {
		if (d != c) l = 0;
		d = c;
		l++;
		m = max(l, m);
	}
	cout << m;
	return 0;
}
