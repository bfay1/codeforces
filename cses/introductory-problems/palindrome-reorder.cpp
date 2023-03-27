#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	long long n = s.size(), odd_ct = 0, str_ct = 0;
	unordered_map<char, long long> freq;
	
	for (int i = 0; i < n; i++)
		odd_ct += 2*(++freq[s[i]] & 1) - 1;
	if (odd_ct > 1) {
		cout << "NO SOLUTION" << endl;
		return 0;
	}
 
	vector<pair<long long, char>> ps;
	
	for (auto it : freq)
		ps.push_back(make_pair((long long) it.second, (char) it.first));
	
	sort(ps.begin(), ps.end());
	long long odd = -1;
 
	for (int i = 0; i < ps.size(); i++) {
		for (int j = 0; j < ps[i].first / 2; j++)
			cout << ps[i].second;
		if (ps[i].first & 1) odd = i;
	}
 
	if (odd > -1)
		cout << ps[odd].second;
	
	for (int i = ps.size() - 1; i >= 0; i--)
		for (int j = 0; j < ps[i].first / 2; j++)
			cout << ps[i].second;
 
	return 0;
}
