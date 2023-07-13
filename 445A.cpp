// 445A.cpp
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int n ,m;
vector<vector<char> > s(105, vector<char>(105, '-')); 
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void dfs(char tag, int x, int y){
	s[x][y] = tag;
	tag = tag == 'W' ? 'B' : 'W';
	for (int i = 0; i < 4; i++){
		int a = x + dx[i], b = y + dy[i];
		if (s[a][b] == '.'){
			dfs(tag, a, b);
		}
	}
}
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> s[i][j];
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (s[i][j] == '.') dfs('B', i, j);
			cout << s[i][j];
		}
		cout << endl;
	}
}