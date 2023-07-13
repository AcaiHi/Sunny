// 1763B_v2.cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using vpii = vector<pair<int, int> >;
#define F first
#define S second
int t, n, k;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> k;
		vpii v(n); int h[n];
		for (auto &it : v) cin >> it.F;
		for (auto &it : v) cin >> it.S;
		sort(v.begin(), v.end());
		int i = 0, dmg = 0, f = 0;
		for (auto &it : h) it = v[i++].F;
		for (int i = n - 2; i >= 0; i--)
			v[i].S = min(v[i + 1].S, v[i].S);
		while (k > 0){
			int up = upper_bound(h, h + n, k + dmg) - h;
			if (up == n) f = 1, k = 0;
			else {
				dmg += k;
				k -= v[up].S;
			}
		}
		cout << (f ? "Yes\n" : "No\n");

	}
}