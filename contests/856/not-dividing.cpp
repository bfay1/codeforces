

    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve()
    {
    	int n; cin >> n;
    	vector<int> a(n);
    	for (int i = 0; i < n; i++) {
    		cin >> a[i];
    		if (a[i] == 1)
    			a[i]++;
    	}
    	for (int i = 0; i < n - 1; i++) {
    		if (a[i + 1] % a[i] == 0) {
    			a[i + 1]++;
    		}
    	}
    	for (int i = 0; i < n; i++)
    		cout << a[i] <<  n[i == n - 1];
    }
     
    signed main()
    {
    	cin.tie(nullptr)->sync_with_stdio(false);
    	int t; cin >> t;
    	while (t--) solve();
    }
