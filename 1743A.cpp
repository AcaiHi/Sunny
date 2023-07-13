// 1743A.cpp
#include<iostream>
#include<set>
using namespace std;
int t, n, x, vis[10];
set<string> s;
void construct(int x, int y){
	string res = "    ";
	for (int i = 0; i < 4; i++){
		for (int j = i + 1; j < 4; j++){
			res[i]=  res[j] = x + '0';
			for (int k = 0; k < 4; k++)
				if (k != i && k != j) res[k] = y + '0';
			s.insert(res);
		}
	}
}
int main(){
	cin >> t;
	while (t--){
		fill (vis, vis + 10, 0);
		s = set<string>{};
		cin >> n;
		while (n--) cin >> x, vis[x] = 1;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++){
				if (i == j || vis[i] || vis[j]) continue;
				 construct(i, j);
			}
		cout << s.size() << endl;
	}
}