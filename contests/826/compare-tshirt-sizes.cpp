#include <bits/stdc++.h>
using namespace std;
int shirtScore(string s) {
	if (s[0] == 'M') return 0;
	int score = 1;
	if (s.back() == 'S') score = -1;
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'X' && score > 0) score++;
		else if (s[i] == 'X' && score < 0) score--;
	}
	return score;
}
void solve() {
	string a, b;
	cin >> a >> b;
	int ascore = shirtScore(a);
	int bscore = shirtScore(b);
 
	if (ascore == bscore) cout << "=\n";
	else cout << ((ascore < bscore) ? "<\n" : ">\n");
}
 
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
