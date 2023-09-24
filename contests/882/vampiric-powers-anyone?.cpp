#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
 
struct TrieNode {
    int value;
    TrieNode* child[2];
    TrieNode() {
	this->value = 0;
	this->child[0] = this->child[1] = nullptr;
    }
};
 
void solve()
{
    int n;
    cin >> n;
    TrieNode* root = new TrieNode();
    int ans = LLONG_MIN, pre = 0;
 
    auto insert = [] (TrieNode* root, int pre) {
	TrieNode* temp = root;
	for (int i = 7; i >= 0; i--) {
	    bool cur = pre & (1 << i);
	    if (!temp->child[cur]) {
		temp->child[cur] = new TrieNode();
	    }
	    temp = temp->child[cur];
	}
	temp->value = pre;
    };
 
    auto query = [] (TrieNode* root, int pre) {
	TrieNode* temp = root;
	for (int i = 7; i >= 0; i--) {
	    bool cur = pre & (1 << i);
	    if (temp->child[1 - cur]) {
		temp = temp->child[1 - cur];
	    } else if (temp->child[cur]) {
		temp = temp->child[cur];
	    }
	}
	return pre ^ temp->value;
    };
 
    insert(root, 0LL);
 
    for (int i = 0; i < n; i++) {
	int x;
	cin >> x;
	pre ^= x;
	insert(root, pre);
	ans = max(ans, query(root, pre));
    }
 
    cout << ans << "\n";
}
 
signed main()
{
    int t;
    cin >> t;
 
    while (t--) {
	solve();
    }
}




