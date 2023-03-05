    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve()
    {
    	int n; cin >> n;
    	
    	vector<vector<int>> perm(n, vector<int>(n - 1));
    	vector<int> p(n, 0);
    	vector<int> cnt(n + 1, 0);
     
    	for (int i = 0; i < n; i++) {
    		for (int j = 0; j < n - 1; j++) {
    			cin >> perm[i][j];
    			if (j == 0)
    				cnt[perm[i][j]]++;
    		}
    	}
     
    	for (int i = 1; i <= n; i++) {
    		if (cnt[i] == n - 1) {
    			p[0] = i;
    			break;
    		}
    	}
     
    	for (int i = 0; i < n; i++) {
    		if (perm[i][0] != p[0]) {
    			copy(perm[i].begin(), perm[i].end(), p.begin() + 1);
    			break;
    		}
    	}
    	
    	for (auto i : p)
    		cout << i <<  n[i == p.back()];
    }
     
    signed main()
    {
    	cin.tie(nullptr)->sync_with_stdio(false);
    	int t; cin >> t;
    	while (t--) solve();
    }
