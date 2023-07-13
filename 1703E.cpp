// 1703E.cpp
#include<iostream>
#include<set>
using namespace std;
int t, n, cnt;
set<pair<int, int>> mini;
set<pair<int, int>> ear;
bool s[205][205];
void turns(){
	int nnn[n][n];
	for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				nnn[i][j] = s[j][i];
			}
		}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (nnn[i][j] != s[i][j]) {
				if (ear.count({i, j})) continue;
				 
				if (mini.count({j, i})){
					mini.erase({j, i});
					ear.insert({i, j});
					ear.insert({j, i});
				}else cnt++;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			s[i][j] = nnn[j][i];
		}
	}
}
int main(){
	cin >> t;
	while (t--){
		mini = set<pair<int, int>>{};
		cin >> n;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				char x;cin >> x;
				s[i][j] = x == '1';
			}
		}
		turns(); turns(); turns();
		cout << cnt << endl;
	}
}