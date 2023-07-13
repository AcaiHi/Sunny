// 1369B.cpp
#include<iostream>
#include<vector>
using namespace std;
#define F first
#define S second
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		string s; cin >> s;
		vector<pair<int, string> > v;
		for (char x : s)
			if (v.empty() || v.back().F != x - '0')
				v.emplace_back(x - '0', to_string(x - '0'));
			else v.back().S += x;
		
		string ans;
		bool f = 0;int can = 0;
		bool vis[v.size()] = {};
		for (int i = 0; i + 1 < v.size(); i+=2){
			if (v[i].F == 0 && i == 0) {
				vis[0] = 1;
				ans = ans + v[0].S; i--; continue;
			}
			if (v[i].F && !v[i + 1].F) 
				vis[i] = vis[i + 1] = 1, can = 1;
			else 
				vis[i] = 1, ans += v[i].S;
			
		}
		cout << (can ? "0" : "") << ans << (!vis[v.size() - 1]? v.back().S : "") << "\n";

	}
}