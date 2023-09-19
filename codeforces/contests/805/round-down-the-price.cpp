#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, m;
    set<int> st {-1000000000, -100000000, -10000000, -1000000, -100000, -10000, -1000, -100, -10, -1};
	cin >> t;
	while (t--) {
        cin >> m;
        cout << abs(-m - *st.lower_bound(-m)) << "\n";
    }
}
