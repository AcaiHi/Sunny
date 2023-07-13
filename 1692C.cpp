// 1692C.cpp
#include<iostream>
#include<vector>
using namespace std;
int dx[] = {1,1,-1,-1};
int dy[] = {-1,1,1,-1};
int t, res;
int main(){
	cin >> t;
	while (t--){
		vector<vector<char> > G(10, vector<char>(10, '.'));
		int cnt = 0;
		for (int i = 1; i <= 8; i++)
			for (int j = 1; j <= 8; j++){
				cin >> G[i][j];
			}
		for (int i = 1; i <= 8; i++){
			for (int j = 1; j <= 8; j++){
				// cout << G[i][j];
				if (G[i][j] == '#') {
					bool f = 1;
					for (int k = 0; k < 4; k++){
						int a = i + dx[k], b = j + dy[k];
						if (G[a][b] != '#') f = 0;
					}
					if (f) cout << i << " " << j << endl;
				}
			}
			//cout << endl;
		}
	}
}