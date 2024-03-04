#include <bits/stdc++.h>
using namespace std;
#define int long long

const int maxn {1000000};

signed main()
{
    ifstream fin("king2.in");
    ofstream fout("king2.out");

    int g[8][8];

    for (int i = 0; i < 8; i++)
	for (int j = 0; j < 8; j++)
	    fin >> g[i][j];

    for (int i = 7; i >= 0; i--) {
	for (int j = 0; j < 8; j++) {
	    bool up = i < 7, right = 0 < j;
	    int weight = g[i][j];
	    g[i][j] = maxn;
	    if (up)
		g[i][j] = min(g[i][j], g[i + 1][j] + weight);
	    if (right)
		g[i][j] = min(g[i][j], g[i][j - 1] + weight);
	    if (up && right)
		g[i][j] = min(g[i][j], g[i + 1][j - 1] + weight);
	    if (g[i][j] == maxn)
		g[i][j] = weight;
	}
    }

    fout << g[0][7] << "\n";
}
