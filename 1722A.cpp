// 1722A.cpp
#include<iostream>
using namespace std;
int t, n;
int vis[100000];
int main(){
	cin >> t;
	while (t--){
		int n; cin >> n;
		string s; cin >> s;
		fill (vis, vis + 100000, 0);
		if (s.length() != 5) {
			cout << "No\n";
			continue;
		}else {
			for (char x : s) vis[x]++;
			cout << (((vis['T'] == 1) + (vis['i'] == 1) + (vis['m'] == 1) + (vis['u'] == 1)+ (vis['r'] == 1))== 5 ? "Yes\n" : "No\n");
		}
	}
}