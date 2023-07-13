// 580c.cpp
#include<iostream>
#include<vector>
using namespace std;
const int N = 228228;
bool has[N], vis[N];
using vv = vector<vector<int > > ;
vv g(N + 10, vector<int>());
int m, n, x;
void dfs(int idx, int pr, int d){
	if (m < d) return;
	bool f = 1;
	for (int u : g[idx]){
		if (u != pr)
			f = 0, dfs(u, idx, d * has[u] + has[u]);
	}
	x += f;
}
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> has[i];
	while (--n){
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1, -1, has[1]);
	cout << x;
}