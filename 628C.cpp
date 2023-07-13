// 628C.cpp
#include<iostream>
using namespace std;
char use(char x, int l = 25) {
	return x + l;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
		int n, slen; cin >> slen >> n;
		string s; cin >> s;
		int cnt = 0;
		for (auto &x : s) {
			int l = abs('z' - x);
			int r = abs('a' - x);
			int tmp = n;
			if (l >= r){
				n -= min(l, n);
				x = use(x, min(l, tmp));
			}else {
				n -= min(r, n);
				x = use(x, -min(r, tmp));
			}
			if (n == 0) break;
		}
		cout << (n ? "-1" : s) << endl;
}