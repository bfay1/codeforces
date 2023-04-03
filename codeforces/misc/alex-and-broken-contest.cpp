/*
 * NAME: jbrenda1
 * LANG: C++
 * TASK: skidesign
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	string friends[5] = {"Danil", "Olya","Slava", "Ann", "Nikita"};
	string problem;
	cin >> problem;
	bool found = false;
	for (auto name : friends) {
		int index = problem.find(name);
		if (index != -1) {
			found = true;
			string nxt = problem.substr(index + name.size(), problem.size());
			for (auto other_name : friends) {
				if (nxt.find(other_name) != -1) {
					cout << "NO\n";
					return 0;
				}
			}
		}
	}

	if (found)
		cout << "YES\n";
	else
		cout << "NO\n";
}
