// 1822A.cpp
#include<iostream>
using namespace std;
using PII = pair<int, int>;
int main(){
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		PII q[n];
		for (auto &[x, y] : q) cin >> x;
		for (auto &[x, y] : q) cin >> y;

		int maxi = 0, tot = 0, ans = -1;
		for (auto [x, y] : q) {
			if (x + tot++ <= k && maxi < y) ans = tot, maxi = y;
		}
		cout << ans << endl;
	}
}