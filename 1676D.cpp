// 1676D.cpp
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int t, n, ans, m;

int q[205][205];
bool vis[205][205];
int dx[] = {-1,1,-1,1};
int dy[] = {-1,1,1,-1};
void dfs(int x, int y){
	ans += q[x][y];
	q[x][y] = -1;
	for (int i = 0; i < 4; i++){
		if (q[x + dx[i]][y + dy[i]] != -1)
			dfs(x + dx[i], y + dy[i]);
	}
}
int main(){
	cin >> t;
	while (t--){
		ans= 0;
		cin >> n >> m;
		memset(q, -1, sizeof q);
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> q[i][j];
		int ss1 = 0, ss2 = 0, d11 = 0, d12 = 0, d21 = 0, d22 = 0;
		int tar = n;
		for (int i= 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				if (i == j) ss1 += q[i][j];
				else if ((i & 1) == (j & 1) && (j & 1) == 1) d11 += q[i][j];
				else if ((i & 1) == (j & 1) && (j & 1) == 0) d12 += q[i][j];
				
				if (j == tar) ss2 += q[i][j];
				else if ((i & 1) != (j & 1) && (i & 1) == 1) d21 += q[i][j];
				else if ((i & 1) != (j & 1) && (i & 1) == 0) d22 += q[i][j];
			}
			tar--;
		}
		cout << ss1 << " " << ss2 << " " << d22 << " " << d21 << endl;
		cout << max({ss1 + d12, ss1 +d12, ss2 + d21, ss2 + d22}) << endl;
	}
}