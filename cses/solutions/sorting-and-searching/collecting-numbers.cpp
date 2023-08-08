#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
	int n;
	cin >> n;
	set<int> st = {0};
	int ans = 1;
	while (n--) {
		int x;
		cin >> x;
		if (st.find(x - 1) == st.end())
			ans++;
		st.insert(x);
	}
	cout << ans << "\n";
}










