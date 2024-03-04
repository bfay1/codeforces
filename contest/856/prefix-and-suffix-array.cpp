    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    void solve()
    {
     
    	function <bool(string)> ispal = [&] (string t) {
    		int l = 0, r = t.size() - 1;
    		while (l < r)
    			if (t[r--] != t[l++])
    				return false;
    		return true;
    	};
     
    	int n; cin >> n;
    	string a = ;
    	string b = ;
    	for (int i = 0; i < 2*n - 2; i++) {
    		string t; cin >> t;
    		if (t.size() == n - 1 && a == )
    			a = t;
    		else if (t.size() == n - 1 && a != )
    			b = t;
    	}
    	
    	reverse(a.begin(), a.end());
     
    	cout << (a == b ? YESn : NOn);
    }
     
    signed main()
    {
    	cin.tie(nullptr)->sync_with_stdio(false);
    	int t; cin >> t;
    	while (t--) solve();
    }
