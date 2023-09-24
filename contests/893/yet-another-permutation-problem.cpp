#include <bits/stdc++.h> 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    set<int> used;
    vector<int> ans;
 
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (used.insert(j).second && j <= n){
            ans.push_back(j);
            j *= 2;
        }
    }
 
    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
