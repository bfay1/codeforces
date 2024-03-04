#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    set<char> st;
    cin >> t;
    while (t--) {
        string s;
        int ans = 0;
        cin >> s;
        for (const auto& c : s) {
            if (st.find(c) == st.end() && 3 <= st.size())
                ans++, st.clear();
            st.insert(c);
        }
        if (st.size())
            ans++;
        cout << ans << "\n";
        st.clear();
    }
}
