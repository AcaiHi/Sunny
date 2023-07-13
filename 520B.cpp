// 520B.cpp
#include<iostream>
#include<queue>
using namespace std;
int n, m, ans;
bool pass[100005];
void bfs(int x){
	queue<int> q;
	q.push(x);
	pass[x] = 1;
	int dd;
	while (dd = q.size(), dd){
		while (dd--){
			int u = q.front(); q.pop();
			if (u == m) {
				cout << ans;
				return;
			} 
			if (!pass[u * 2] && u * 2 < m * 4 && u * 2 < 100000){
				pass[u * 2] = 1;
				q.push(u * 2);
			}
			if (!pass[u - 1] && u - 1 > 0){
				pass[u - 1] = 1;
				q.push(u - 1);
			}
		}
		ans++;
	}
}
int main(){
	cin >> n >> m;
	bfs(n);
}