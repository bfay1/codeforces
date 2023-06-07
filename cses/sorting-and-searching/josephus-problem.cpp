#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::set<int> st;

    for (int i = 1; i <= n; i++)
	st.insert(i);

    int i = 0;
    auto it = st.begin();
    while (!st.empty()) {
	if (i % 2) {
	    std::cout << (int) *it << " ";
	    it = st.erase(it);
	} else {
	    it++;
	}
	if (it == st.end())
	    it = st.begin();
	i++;
    }
    std::cout << "\n";
}
