#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> strings;
	int count = 0;
	do {
		strings.push_back(s);
		count++;
	} while (next_permutation(s.begin(), s.end()));
	cout << count << endl;
	for (auto s : strings) cout << s << endl;
	return 0;
}
