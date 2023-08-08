#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long n, a;
	cin >> n;
	set<long long> st;
	for (int i = 0; i < n; i++) {
		cin >> a;
		st.insert(a);
	}
	cout << st.size() << endl;
	return 0;
}
