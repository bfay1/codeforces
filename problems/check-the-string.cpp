#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	string s;
	cin >> s;
	int a = count(s.begin(), s.end(), 'a');
	int b = count(s.begin(), s.end(), 'b');
	string one = "";
	string two = "";
	for (int i = 0; i < a; i++)
		one.push_back('a'), two.push_back('a');
	for (int i = 0; i < b; i++)
		one.push_back('b'), two.push_back('b');
	while (a--)
		one.push_back('c');
	while (b--)
		two.push_back('c');
	cout << ((a > 0 && b > 0) && (one == s || two == s) ? "YES\n" : "NO\n");
}
