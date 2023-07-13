//216B.cpp
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
const int N = 105;

int m, n, f;
vector<vector<int> > g(N, vector<int>());
vector<bool> used(N);
bool dfs(int x, int y){
	if (used[x]) return 1;
	used[x] = 1;
	f++;
	for (auto z : g[x])
		if (z ^ y && dfs(z, x)) return f & 1;
	return 0;
}

int main(){
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){
		//cout << used[i] << " ";
		f = 0;
		if (!used[i] && dfs(i, 0)) ans++;
	}
	cout << ans + ((n - ans) & 1);
}