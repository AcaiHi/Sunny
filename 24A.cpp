// 24A.cpp
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
typedef long long ll;
ll n, t[N] = {1,1}, naf[N] = {1,1};
ll comm(int l, int r){
	int vis[N] = {};
	ll cnt = 0, res = 0;
	for (int i = l; i <= r; i++)
		vis[t[i]]++, cnt++;
	
	for (int i = 1; i <= N; i++){
		if (vis[i])
			res++, cnt-=vis[i];
		if (!cnt) break;

	}
	return res;
}
int main(){
	int x; cin >> x;
	while (x--){

		cin >> n;
		int vis[N] = {};
		int end = n, flag = 0;
		for (int i = 1; i <= n; i++){
			cin >> t[i];
			if (vis[t[i]])
				flag = end = i;
			else vis[t[i]]++;
		}
		int ans = -1; 
		int ansy = end, ansx = 1;
		if (!flag) {cout << 1 << " " << 1 << endl; continue;}
		for (int i = 1; i < end; i++){
			int tmp = end - i - comm(i, end);
			if (tmp > ans)
			{
				ans = tmp;
				ansx = i;
			}
			if (ans = end - i - 1) break;
		}
		
		//cout << ans << " ";		
		cout << ansx << " " << ansy << endl;
	}
}