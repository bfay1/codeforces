/*
ID: jbrenda1
TASK: holstein
LANG: C++
 */

#include <bits/stdc++.h>
using namespace std;

const int MXV = 20;
const int MXG = 1005;




int main()
{

    ifstream fin("holstein.in");
    ofstream fout("holstein.out");

    int v, g;
    fin >> v;
    vector<int> vit(v);
    for (auto& x : vit)
	fin >> x;
    fin >> g;
    vector<vector<int>> feed(g, vector<int>(v));
    for (auto& x : feed)
	for (auto& y : x)
	    fin >> y;

    vector<int> ansv;
    vector<int> used;
    int ans = INT_MAX;

    function <void(int)> dfs = [&] (int i) {

	if (i == g) {
	    for (int j = 0; j < v; j++) {
		int sum = 0;
		for (auto u : used)
		    sum += feed[u][j];

		if (sum < vit[j])
		    return;
	    }

	    if (used.size() < ans) {
		ans = used.size();
		ansv = used;
	    }

	    return;
	}

	used.push_back(i);
	dfs(i + 1);
	used.pop_back();
	dfs(i + 1);
    };
    
    dfs(0);

    fout << ans << " ";

    for (int i = 0; i < ans; i++)
	fout << ansv[i] + 1 << " \n"[i == ans - 1];


}






