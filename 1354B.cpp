// 1354B.cpp
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int t, n;
string s;
#define len length()
#define endl "\n"
int main(){
	cin >> t;
	while (t--){
		cin >> s;
		bool fir = 1;
		int vis[4] = {}, ans = 0x7fffffff;
		char now = s[0]; vis[s[0] - '0'] = 1;
		for (int i = 1, st = 0; i < s.len; i++){
			if (vis[s[i] - '0'] && now != s[i]) st = i - 1, fir = 0, now = s[i];
			else if (!vis[s[i] - '0']) vis[s[i] - '0'] = 1, fir = 0, now = s[i];
			else if (fir) st++;

			if (vis[1] && vis[2] && vis[3]){
				ans = min(ans, i - st + 1);
				st = i - 1;
				fill(vis, vis + 4, 0);
				vis[s[i] - '0'] = vis[s[i - 1] - '0'] = 1;
			}
		}
		cout << (ans == 0x7fffffff ? 0 : ans)<< endl;
	}
}

/*
策略是採用 變數st(紀錄第一個元素最後的地方)
 ，過程中為湊齊3個前在i遇到之前的已拿的元素則更新st = i - 1
 三個全拿了先更新ans = min(ans, i - st + 1), st = i -
*/